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
** Form generated from reading UI file 'qtractorTakeRangeForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORTAKERANGEFORM_H
#define UI_QTRACTORTAKERANGEFORM_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorTakeRangeForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *RangeGroupBox;
    QGridLayout *gridLayout1;
    QLabel *TakeEndTextLLabel;
    QRadioButton *SelectionRangeRadioButton;
    QSpacerItem *spacerItem;
    QRadioButton *EditRangeRadioButton;
    QRadioButton *CustomRangeRadioButton;
    QRadioButton *LoopRangeRadioButton;
    qtractorTimeSpinBox *TakeStartSpinBox;
    qtractorTimeSpinBox *TakeEndSpinBox;
    QLabel *TakeStartTextLLabel;
    QRadioButton *PunchRangeRadioButton;
    QGroupBox *SelectGroupBox;
    QVBoxLayout *vboxLayout;
    QListWidget *CurrentTakeListBox;
    QGroupBox *FormatGroupBox;
    QVBoxLayout *vboxLayout1;
    QComboBox *FormatComboBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorTakeRangeForm)
    {
        if (qtractorTakeRangeForm->objectName().isEmpty())
            qtractorTakeRangeForm->setObjectName(QString::fromUtf8("qtractorTakeRangeForm"));
        qtractorTakeRangeForm->resize(360, 260);
        qtractorTakeRangeForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorTakeRangeForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorTakeRangeForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RangeGroupBox = new QGroupBox(qtractorTakeRangeForm);
        RangeGroupBox->setObjectName(QString::fromUtf8("RangeGroupBox"));
        gridLayout1 = new QGridLayout(RangeGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TakeEndTextLLabel = new QLabel(RangeGroupBox);
        TakeEndTextLLabel->setObjectName(QString::fromUtf8("TakeEndTextLLabel"));

        gridLayout1->addWidget(TakeEndTextLLabel, 6, 1, 1, 1);

        SelectionRangeRadioButton = new QRadioButton(RangeGroupBox);
        SelectionRangeRadioButton->setObjectName(QString::fromUtf8("SelectionRangeRadioButton"));
        SelectionRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(SelectionRangeRadioButton, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(14, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 5, 0, 2, 1);

        EditRangeRadioButton = new QRadioButton(RangeGroupBox);
        EditRangeRadioButton->setObjectName(QString::fromUtf8("EditRangeRadioButton"));
        EditRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(EditRangeRadioButton, 3, 0, 1, 3);

        CustomRangeRadioButton = new QRadioButton(RangeGroupBox);
        CustomRangeRadioButton->setObjectName(QString::fromUtf8("CustomRangeRadioButton"));
        CustomRangeRadioButton->setChecked(true);

        gridLayout1->addWidget(CustomRangeRadioButton, 4, 0, 1, 3);

        LoopRangeRadioButton = new QRadioButton(RangeGroupBox);
        LoopRangeRadioButton->setObjectName(QString::fromUtf8("LoopRangeRadioButton"));
        LoopRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(LoopRangeRadioButton, 1, 0, 1, 2);

        TakeStartSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        TakeStartSpinBox->setObjectName(QString::fromUtf8("TakeStartSpinBox"));
        TakeStartSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(TakeStartSpinBox, 5, 2, 1, 1);

        TakeEndSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        TakeEndSpinBox->setObjectName(QString::fromUtf8("TakeEndSpinBox"));
        TakeEndSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(TakeEndSpinBox, 6, 2, 1, 1);

        TakeStartTextLLabel = new QLabel(RangeGroupBox);
        TakeStartTextLLabel->setObjectName(QString::fromUtf8("TakeStartTextLLabel"));

        gridLayout1->addWidget(TakeStartTextLLabel, 5, 1, 1, 1);

        PunchRangeRadioButton = new QRadioButton(RangeGroupBox);
        PunchRangeRadioButton->setObjectName(QString::fromUtf8("PunchRangeRadioButton"));
        PunchRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(PunchRangeRadioButton, 2, 0, 1, 3);


        gridLayout->addWidget(RangeGroupBox, 0, 0, 2, 1);

        SelectGroupBox = new QGroupBox(qtractorTakeRangeForm);
        SelectGroupBox->setObjectName(QString::fromUtf8("SelectGroupBox"));
        vboxLayout = new QVBoxLayout(SelectGroupBox);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        CurrentTakeListBox = new QListWidget(SelectGroupBox);
        CurrentTakeListBox->setObjectName(QString::fromUtf8("CurrentTakeListBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CurrentTakeListBox->sizePolicy().hasHeightForWidth());
        CurrentTakeListBox->setSizePolicy(sizePolicy);
        CurrentTakeListBox->setMaximumSize(QSize(100, 100));

        vboxLayout->addWidget(CurrentTakeListBox);


        gridLayout->addWidget(SelectGroupBox, 0, 1, 1, 1);

        FormatGroupBox = new QGroupBox(qtractorTakeRangeForm);
        FormatGroupBox->setObjectName(QString::fromUtf8("FormatGroupBox"));
        vboxLayout1 = new QVBoxLayout(FormatGroupBox);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        FormatComboBox = new QComboBox(FormatGroupBox);
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->setObjectName(QString::fromUtf8("FormatComboBox"));

        vboxLayout1->addWidget(FormatComboBox);


        gridLayout->addWidget(FormatGroupBox, 1, 1, 1, 1);

        DialogButtonBox = new QDialogButtonBox(qtractorTakeRangeForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(DialogButtonBox, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        TakeEndTextLLabel->setBuddy(TakeEndSpinBox);
        TakeStartTextLLabel->setBuddy(TakeStartSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(SelectionRangeRadioButton, LoopRangeRadioButton);
        QWidget::setTabOrder(LoopRangeRadioButton, PunchRangeRadioButton);
        QWidget::setTabOrder(PunchRangeRadioButton, EditRangeRadioButton);
        QWidget::setTabOrder(EditRangeRadioButton, CustomRangeRadioButton);
        QWidget::setTabOrder(CustomRangeRadioButton, TakeStartSpinBox);
        QWidget::setTabOrder(TakeStartSpinBox, TakeEndSpinBox);
        QWidget::setTabOrder(TakeEndSpinBox, CurrentTakeListBox);
        QWidget::setTabOrder(CurrentTakeListBox, FormatComboBox);

        retranslateUi(qtractorTakeRangeForm);

        QMetaObject::connectSlotsByName(qtractorTakeRangeForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorTakeRangeForm)
    {
        qtractorTakeRangeForm->setWindowTitle(QCoreApplication::translate("qtractorTakeRangeForm", "Take Range", nullptr));
        RangeGroupBox->setTitle(QCoreApplication::translate("qtractorTakeRangeForm", "Range", nullptr));
        TakeEndTextLLabel->setText(QCoreApplication::translate("qtractorTakeRangeForm", "En&d:", nullptr));
#if QT_CONFIG(tooltip)
        SelectionRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Selection range", nullptr));
#endif // QT_CONFIG(tooltip)
        SelectionRangeRadioButton->setText(QCoreApplication::translate("qtractorTakeRangeForm", "&Selection", nullptr));
#if QT_CONFIG(tooltip)
        EditRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Edit range", nullptr));
#endif // QT_CONFIG(tooltip)
        EditRangeRadioButton->setText(QCoreApplication::translate("qtractorTakeRangeForm", "&Edit", nullptr));
#if QT_CONFIG(tooltip)
        CustomRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Custom range", nullptr));
#endif // QT_CONFIG(tooltip)
        CustomRangeRadioButton->setText(QCoreApplication::translate("qtractorTakeRangeForm", "&Custom", nullptr));
#if QT_CONFIG(tooltip)
        LoopRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Loop range", nullptr));
#endif // QT_CONFIG(tooltip)
        LoopRangeRadioButton->setText(QCoreApplication::translate("qtractorTakeRangeForm", "&Loop", nullptr));
#if QT_CONFIG(tooltip)
        TakeStartSpinBox->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Clip start", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TakeEndSpinBox->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Clip offset", nullptr));
#endif // QT_CONFIG(tooltip)
        TakeStartTextLLabel->setText(QCoreApplication::translate("qtractorTakeRangeForm", "St&art:", nullptr));
#if QT_CONFIG(tooltip)
        PunchRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Punch range", nullptr));
#endif // QT_CONFIG(tooltip)
        PunchRangeRadioButton->setText(QCoreApplication::translate("qtractorTakeRangeForm", "&Punch", nullptr));
        SelectGroupBox->setTitle(QCoreApplication::translate("qtractorTakeRangeForm", "Select", nullptr));
#if QT_CONFIG(tooltip)
        CurrentTakeListBox->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Current take", nullptr));
#endif // QT_CONFIG(tooltip)
        FormatGroupBox->setTitle(QCoreApplication::translate("qtractorTakeRangeForm", "Format", nullptr));
        FormatComboBox->setItemText(0, QCoreApplication::translate("qtractorTakeRangeForm", "Frames", nullptr));
        FormatComboBox->setItemText(1, QCoreApplication::translate("qtractorTakeRangeForm", "Time", nullptr));
        FormatComboBox->setItemText(2, QCoreApplication::translate("qtractorTakeRangeForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        FormatComboBox->setToolTip(QCoreApplication::translate("qtractorTakeRangeForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qtractorTakeRangeForm: public Ui_qtractorTakeRangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORTAKERANGEFORM_H
