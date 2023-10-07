/*
qtractor - An Audio/MIDI multi-track sequencer.

   Copyright (C) 2005-2021, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qtractorTempoAdjustForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORTEMPOADJUSTFORM_H
#define UI_QTRACTORTEMPOADJUSTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorTempoAdjustForm
{
public:
    QVBoxLayout *MainBoxLayout;
    QGridLayout *GroupBoxLayout;
    QGroupBox *TempoGroupBox;
    QGridLayout *gridLayout;
    QLabel *TempoTextLabel;
    qtractorTempoSpinBox *TempoSpinBox;
    QSpacerItem *spacerItem;
    QPushButton *TempoDetectPushButton;
    QSpacerItem *spacerItem1;
    QPushButton *TempoTapPushButton;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QGroupBox *RangeGroupBox;
    QGridLayout *gridLayout1;
    QLabel *RangeStartTextLabel;
    qtractorTimeSpinBox *RangeStartSpinBox;
    QLabel *RangeLengthTextLabel;
    qtractorTimeSpinBox *RangeLengthSpinBox;
    QLabel *RangeBeatsTextLabel;
    QSpinBox *RangeBeatsSpinBox;
    QPushButton *AdjustPushButton;
    QSpacerItem *spacerItem4;
    QGroupBox *FormatGroupBox;
    QVBoxLayout *vboxLayout;
    QComboBox *FormatComboBox;
    QSpacerItem *spacerItem5;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorTempoAdjustForm)
    {
        if (qtractorTempoAdjustForm->objectName().isEmpty())
            qtractorTempoAdjustForm->setObjectName(QString::fromUtf8("qtractorTempoAdjustForm"));
        qtractorTempoAdjustForm->resize(640, 240);
        qtractorTempoAdjustForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/transportMetro.png"));
        qtractorTempoAdjustForm->setWindowIcon(icon);
        MainBoxLayout = new QVBoxLayout(qtractorTempoAdjustForm);
        MainBoxLayout->setSpacing(8);
        MainBoxLayout->setContentsMargins(8, 8, 8, 8);
        MainBoxLayout->setObjectName(QString::fromUtf8("MainBoxLayout"));
        GroupBoxLayout = new QGridLayout();
        GroupBoxLayout->setSpacing(4);
        GroupBoxLayout->setObjectName(QString::fromUtf8("GroupBoxLayout"));
        TempoGroupBox = new QGroupBox(qtractorTempoAdjustForm);
        TempoGroupBox->setObjectName(QString::fromUtf8("TempoGroupBox"));
        gridLayout = new QGridLayout(TempoGroupBox);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TempoTextLabel = new QLabel(TempoGroupBox);
        TempoTextLabel->setObjectName(QString::fromUtf8("TempoTextLabel"));
        TempoTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout->addWidget(TempoTextLabel, 0, 0, 1, 1);

        TempoSpinBox = new qtractorTempoSpinBox(TempoGroupBox);
        TempoSpinBox->setObjectName(QString::fromUtf8("TempoSpinBox"));
        TempoSpinBox->setMinimumSize(QSize(100, 10));

        gridLayout->addWidget(TempoSpinBox, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(8, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        TempoDetectPushButton = new QPushButton(TempoGroupBox);
        TempoDetectPushButton->setObjectName(QString::fromUtf8("TempoDetectPushButton"));

        gridLayout->addWidget(TempoDetectPushButton, 0, 3, 1, 1);

        spacerItem1 = new QSpacerItem(8, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 4, 1, 1);

        TempoTapPushButton = new QPushButton(TempoGroupBox);
        TempoTapPushButton->setObjectName(QString::fromUtf8("TempoTapPushButton"));

        gridLayout->addWidget(TempoTapPushButton, 0, 5, 1, 1);

        spacerItem2 = new QSpacerItem(8, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 6, 1, 1);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 1, 0, 1, 7);


        GroupBoxLayout->addWidget(TempoGroupBox, 0, 0, 1, 3);

        RangeGroupBox = new QGroupBox(qtractorTempoAdjustForm);
        RangeGroupBox->setObjectName(QString::fromUtf8("RangeGroupBox"));
        gridLayout1 = new QGridLayout(RangeGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        RangeStartTextLabel = new QLabel(RangeGroupBox);
        RangeStartTextLabel->setObjectName(QString::fromUtf8("RangeStartTextLabel"));
        RangeStartTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(RangeStartTextLabel, 0, 0, 1, 1);

        RangeStartSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        RangeStartSpinBox->setObjectName(QString::fromUtf8("RangeStartSpinBox"));
        RangeStartSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(RangeStartSpinBox, 0, 1, 1, 2);

        RangeLengthTextLabel = new QLabel(RangeGroupBox);
        RangeLengthTextLabel->setObjectName(QString::fromUtf8("RangeLengthTextLabel"));
        RangeLengthTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(RangeLengthTextLabel, 1, 0, 1, 1);

        RangeLengthSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        RangeLengthSpinBox->setObjectName(QString::fromUtf8("RangeLengthSpinBox"));
        RangeLengthSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(RangeLengthSpinBox, 1, 1, 1, 2);

        RangeBeatsTextLabel = new QLabel(RangeGroupBox);
        RangeBeatsTextLabel->setObjectName(QString::fromUtf8("RangeBeatsTextLabel"));
        RangeBeatsTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(RangeBeatsTextLabel, 2, 0, 1, 1);

        RangeBeatsSpinBox = new QSpinBox(RangeGroupBox);
        RangeBeatsSpinBox->setObjectName(QString::fromUtf8("RangeBeatsSpinBox"));
        RangeBeatsSpinBox->setMinimum(1);
        RangeBeatsSpinBox->setMaximum(65536);

        gridLayout1->addWidget(RangeBeatsSpinBox, 2, 1, 1, 1);

        AdjustPushButton = new QPushButton(RangeGroupBox);
        AdjustPushButton->setObjectName(QString::fromUtf8("AdjustPushButton"));

        gridLayout1->addWidget(AdjustPushButton, 2, 2, 1, 1);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem4, 3, 0, 1, 3);


        GroupBoxLayout->addWidget(RangeGroupBox, 1, 0, 1, 2);

        FormatGroupBox = new QGroupBox(qtractorTempoAdjustForm);
        FormatGroupBox->setObjectName(QString::fromUtf8("FormatGroupBox"));
        vboxLayout = new QVBoxLayout(FormatGroupBox);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        FormatComboBox = new QComboBox(FormatGroupBox);
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->setObjectName(QString::fromUtf8("FormatComboBox"));

        vboxLayout->addWidget(FormatComboBox);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem5);


        GroupBoxLayout->addWidget(FormatGroupBox, 1, 2, 1, 1);


        MainBoxLayout->addLayout(GroupBoxLayout);

        DialogButtonBox = new QDialogButtonBox(qtractorTempoAdjustForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        MainBoxLayout->addWidget(DialogButtonBox);

#if QT_CONFIG(shortcut)
        TempoTextLabel->setBuddy(TempoSpinBox);
        RangeStartTextLabel->setBuddy(RangeStartSpinBox);
        RangeLengthTextLabel->setBuddy(RangeLengthSpinBox);
        RangeBeatsTextLabel->setBuddy(RangeLengthSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(TempoSpinBox, TempoDetectPushButton);
        QWidget::setTabOrder(TempoDetectPushButton, TempoTapPushButton);
        QWidget::setTabOrder(TempoTapPushButton, RangeStartSpinBox);
        QWidget::setTabOrder(RangeStartSpinBox, RangeLengthSpinBox);
        QWidget::setTabOrder(RangeLengthSpinBox, RangeBeatsSpinBox);
        QWidget::setTabOrder(RangeBeatsSpinBox, AdjustPushButton);
        QWidget::setTabOrder(AdjustPushButton, FormatComboBox);
        QWidget::setTabOrder(FormatComboBox, DialogButtonBox);

        retranslateUi(qtractorTempoAdjustForm);

        QMetaObject::connectSlotsByName(qtractorTempoAdjustForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorTempoAdjustForm)
    {
        qtractorTempoAdjustForm->setWindowTitle(QCoreApplication::translate("qtractorTempoAdjustForm", "Tempo Adjust", nullptr));
        TempoGroupBox->setTitle(QCoreApplication::translate("qtractorTempoAdjustForm", "Metronome", nullptr));
        TempoTextLabel->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "&Tempo:", nullptr));
#if QT_CONFIG(tooltip)
        TempoSpinBox->setToolTip(QCoreApplication::translate("qtractorTempoAdjustForm", "Tempo/Time signature", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoDetectPushButton->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "&Detect", nullptr));
        TempoTapPushButton->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "T&ap", nullptr));
        RangeGroupBox->setTitle(QCoreApplication::translate("qtractorTempoAdjustForm", "Range", nullptr));
        RangeStartTextLabel->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "&Start:", nullptr));
#if QT_CONFIG(tooltip)
        RangeStartSpinBox->setToolTip(QCoreApplication::translate("qtractorTempoAdjustForm", "Range start", nullptr));
#endif // QT_CONFIG(tooltip)
        RangeLengthTextLabel->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "&Length:", nullptr));
#if QT_CONFIG(tooltip)
        RangeLengthSpinBox->setToolTip(QCoreApplication::translate("qtractorTempoAdjustForm", "Range length", nullptr));
#endif // QT_CONFIG(tooltip)
        RangeBeatsTextLabel->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "&Beats:", nullptr));
#if QT_CONFIG(tooltip)
        RangeBeatsSpinBox->setToolTip(QCoreApplication::translate("qtractorTempoAdjustForm", "Range beats", nullptr));
#endif // QT_CONFIG(tooltip)
        AdjustPushButton->setText(QCoreApplication::translate("qtractorTempoAdjustForm", "A&djust", nullptr));
        FormatGroupBox->setTitle(QCoreApplication::translate("qtractorTempoAdjustForm", "Format", nullptr));
        FormatComboBox->setItemText(0, QCoreApplication::translate("qtractorTempoAdjustForm", "Frames", nullptr));
        FormatComboBox->setItemText(1, QCoreApplication::translate("qtractorTempoAdjustForm", "Time", nullptr));
        FormatComboBox->setItemText(2, QCoreApplication::translate("qtractorTempoAdjustForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        FormatComboBox->setToolTip(QCoreApplication::translate("qtractorTempoAdjustForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qtractorTempoAdjustForm: public Ui_qtractorTempoAdjustForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORTEMPOADJUSTFORM_H
