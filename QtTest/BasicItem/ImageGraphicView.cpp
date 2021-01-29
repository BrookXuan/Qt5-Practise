#include "ImageGraphicView.h"

ImageGraphicView::ImageGraphicView(QWidget *parent)
	: QGraphicsView(parent)
{
	_isPress = false;
	_isSelect = false;
	_viewRect = QRect(0, 0, 512, 512);

	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setMinimumSize(QSize(10, 10));
	setInteractive(true);
	setDragMode(QGraphicsView::NoDrag);
	setCursor(Qt::ArrowCursor);
	setMouseTracking(true);
	setViewportUpdateMode(QGraphicsView::FullViewportUpdate);

}

ImageGraphicView::~ImageGraphicView()
{
}

void ImageGraphicView::SetSelect(bool isSelect)
{
	_isSelect = isSelect;
	if (isSelect)
	{
		setCursor(Qt::OpenHandCursor);
	}
	else
	{
		setCursor(Qt::ArrowCursor);
	}
}

void ImageGraphicView::ZoomIn()
{
	QMatrix matrix;
	qreal scale = 1.2;
	_imgScale = std::fminf(_imgScale * scale,2);
	matrix.scale(_imgScale, _imgScale);
	this->setMatrix(matrix);
}

void ImageGraphicView::ZoomOut()
{
	QMatrix matrix;
	qreal scale = 0.8;
	_imgScale = std::fmaxf(0.5, _imgScale*scale);
	matrix.scale(_imgScale,_imgScale);
	this->setMatrix(matrix);
}

void ImageGraphicView::FitView()
{
	this->scene()->setSceneRect(_viewRect);
	this->fitInView(_viewRect, Qt::KeepAspectRatio);
	QMatrix matrix = this->matrix();
	_imgScale = matrix.m11();

}

void ImageGraphicView::SetViewRect(const QRect rect)
{
	_viewRect = rect;
	_viewRect.setHeight(std::max(10, rect.height()));
	_viewRect.setWidth(std::max(10, rect.width()));
}

void ImageGraphicView::mouseMoveEvent(QMouseEvent * event)
{
	if (_isPress&&_isSelect)
	{
		QPointF qVec = event->pos() - _lastPointF;
		_lastPointF = event->pos();

		float scale = this->matrix().m11;
		this->setSceneRect(
			this->scene()->sceneRect().x() - qVec.x() / scale,
			this->scene()->sceneRect().y() - qVec.y() / scale,
			this->scene()->sceneRect().width(),
			this->scene()->sceneRect().height()
		);
		this->scene()->update();
	}

	QGraphicsView::mouseMoveEvent(event);
}

void ImageGraphicView::mousePressEvent(QMouseEvent * event)
{
	if (_isSelect)
	{
		_isPress = true;
		setCursor(Qt::ClosedHandCursor);
	}
	_lastPointF = event->pos();
	QGraphicsView::mousePressEvent(event);
	update();
}

void ImageGraphicView::mouseReleaseEvent(QMouseEvent * event)
{
	_isPress = false;
	if (_isSelect)
	{
		setCursor(Qt::OpenHandCursor);
	}
	else
	{
		setCursor(Qt::ArrowCursor);
	}
	_lastPointF = event->pos();
	QGraphicsView::mouseReleaseEvent(event);
	update();
}

void ImageGraphicView::wheelEvent(QWheelEvent * event)
{

}
