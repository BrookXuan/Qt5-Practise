#pragma once

#include <QGraphicsView>
#include<QMouseEvent>
#include<QScrollBar>
#include<iostream>

class ImageGraphicView : public QGraphicsView
{
	Q_OBJECT

public:
	ImageGraphicView(QWidget *parent);
	~ImageGraphicView();

	void SetSelect(bool isSelect);

	void ZoomIn();

	void ZoomOut();

	void FitView();

	void SetViewRect(const QRect rect);

protected:
	void mouseMoveEvent(QMouseEvent *event) override;

	void mousePressEvent(QMouseEvent *event) override;

	void mouseReleaseEvent(QMouseEvent *event) override;

	void wheelEvent(QWheelEvent *event) override;

private:
	bool _isPress;
	bool _isSelect;
	QPointF _lastPointF;
	float _imgScale = 1.0;
	QRect _viewRect;
};
