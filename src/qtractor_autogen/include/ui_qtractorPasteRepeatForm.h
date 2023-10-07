/*
qtractor - An Audio/MIDI multi-track sequencer.

   Copyright (C) 2005-2020, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 
*/

/********************************************************************************
** Form generated from reading UI file 'qtractorPasteRepeatForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORPASTEREPEATFORM_H
#define UI_QTRACTORPASTEREPEATFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorPasteRepeatForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *RepeatGroupBox;
    QGridLayout *gridLayout;
    QLabel *RepeatCountTextLabel;
    QSpinBox *RepeatCountSpinBox;
    QSpacerItem *spacerItem;
    QCheckBox *RepeatPeriodCheckBox;
    qtractorTimeSpinBox *RepeatPeriodSpinBox;
    QComboBox *RepeatFormatComboBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorPasteRepeatForm)
    {
        if (qtractorPasteRepeatForm->objectName().isEmpty())
            qtractorPasteRepeatForm->setObjectName(QString::fromUtf8("qtractorPasteRepeatForm"));
        qtractorPasteRepeatForm->resize(260, 160);
        qtractorPasteRepeatForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/editPaste.png"));
        qtractorPasteRepeatForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorPasteRepeatForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        RepeatGroupBox = new QGroupBox(qtractorPasteRepeatForm);
        RepeatGroupBox->setObjectName(QString::fromUtf8("RepeatGroupBox"));
        gridLayout = new QGridLayout(RepeatGroupBox);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RepeatCountTextLabel = new QLabel(RepeatGroupBox);
        RepeatCountTextLabel->setObjectName(QString::fromUtf8("RepeatCountTextLabel"));

        gridLayout->addWidget(RepeatCountTextLabel, 0, 0, 1, 1);

        RepeatCountSpinBox = new QSpinBox(RepeatGroupBox);
        RepeatCountSpinBox->setObjectName(QString::fromUtf8("RepeatCountSpinBox"));
        RepeatCountSpinBox->setMinimum(2);
        RepeatCountSpinBox->setMaximum(200);

        gridLayout->addWidget(RepeatCountSpinBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 2);

        RepeatPeriodCheckBox = new QCheckBox(RepeatGroupBox);
        RepeatPeriodCheckBox->setObjectName(QString::fromUtf8("RepeatPeriodCheckBox"));

        gridLayout->addWidget(RepeatPeriodCheckBox, 1, 0, 1, 1);

        RepeatPeriodSpinBox = new qtractorTimeSpinBox(RepeatGroupBox);
        RepeatPeriodSpinBox->setObjectName(QString::fromUtf8("RepeatPeriodSpinBox"));
        RepeatPeriodSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(RepeatPeriodSpinBox, 1, 1, 1, 2);

        RepeatFormatComboBox = new QComboBox(RepeatGroupBox);
        RepeatFormatComboBox->addItem(QString());
        RepeatFormatComboBox->addItem(QString());
        RepeatFormatComboBox->addItem(QString());
        RepeatFormatComboBox->setObjectName(QString::fromUtf8("RepeatFormatComboBox"));

        gridLayout->addWidget(RepeatFormatComboBox, 1, 3, 1, 1);


        vboxLayout->addWidget(RepeatGroupBox);

        DialogButtonBox = new QDialogButtonBox(qtractorPasteRepeatForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

#if QT_CONFIG(shortcut)
        RepeatCountTextLabel->setBuddy(RepeatCountSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(RepeatCountSpinBox, RepeatPeriodCheckBox);
        QWidget::setTabOrder(RepeatPeriodCheckBox, RepeatPeriodSpinBox);
        QWidget::setTabOrder(RepeatPeriodSpinBox, RepeatFormatComboBox);
        QWidget::setTabOrder(RepeatFormatComboBox, DialogButtonBox);

        retranslateUi(qtractorPasteRepeatForm);

        QMetaObject::connectSlotsByName(qtractorPasteRepeatForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorPasteRepeatForm)
    {
        qtractorPasteRepeatForm->setWindowTitle(QCoreApplication::translate("qtractorPasteRepeatForm", "Paste Repeat", nullptr));
        RepeatGroupBox->setTitle(QCoreApplication::translate("qtractorPasteRepeatForm", "Repeat", nullptr));
        RepeatCountTextLabel->setText(QCoreApplication::translate("qtractorPasteRepeatForm", "&Count:", nullptr));
#if QT_CONFIG(tooltip)
        RepeatCountSpinBox->setToolTip(QCoreApplication::translate("qtractorPasteRepeatForm", "Repeat count", nullptr));
#endif // QT_CONFIG(tooltip)
        RepeatPeriodCheckBox->setText(QCoreApplication::translate("qtractorPasteRepeatForm", "&Period:", nullptr));
#if QT_CONFIG(tooltip)
        RepeatPeriodSpinBox->setToolTip(QCoreApplication::translate("qtractorPasteRepeatForm", "Repeat period", nullptr));
#endif // QT_CONFIG(tooltip)
        RepeatFormatComboBox->setItemText(0, QCoreApplication::translate("qtractorPasteRepeatForm", "Frames", nullptr));
        RepeatFormatComboBox->setItemText(1, QCoreApplication::translate("qtractorPasteRepeatForm", "Time", nullptr));
        RepeatFormatComboBox->setItemText(2, QCoreApplication::translate("qtractorPasteRepeatForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        RepeatFormatComboBox->setToolTip(QCoreApplication::translate("qtractorPasteRepeatForm", "Repeat period format", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qtractorPasteRepeatForm: public Ui_qtractorPasteRepeatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORPASTEREPEATFORM_H
