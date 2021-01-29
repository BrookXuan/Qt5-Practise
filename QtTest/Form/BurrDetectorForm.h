#pragma once

#include <QWidget>
#include "ui_BurrDetectorForm.h"

class BurrDetectorForm : public QWidget
{
	Q_OBJECT

public:
	BurrDetectorForm(QWidget *parent = Q_NULLPTR);
	~BurrDetectorForm();

private:
	Ui::BurrDetectorForm ui;
};
