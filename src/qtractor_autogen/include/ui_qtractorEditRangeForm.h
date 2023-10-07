/*
qtractor - An Audio/MIDI multi-track sequencer.

   Copyright (C) 2005-2022, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qtractorEditRangeForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTOREDITRANGEFORM_H
#define UI_QTRACTOREDITRANGEFORM_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorEditRangeForm
{
public:
    QGridLayout *gridLayout;
    QGroupBox *RangeGroupBox;
    QGridLayout *gridLayout1;
    QRadioButton *SelectionRangeRadioButton;
    QRadioButton *LoopRangeRadioButton;
    QRadioButton *PunchRangeRadioButton;
    QRadioButton *EditRangeRadioButton;
    QRadioButton *CustomRangeRadioButton;
    QLabel *RangeStartTextLabel;
    qtractorTimeSpinBox *RangeStartSpinBox;
    QSpacerItem *spacerItem;
    QLabel *RangeEndTextLabel;
    qtractorTimeSpinBox *RangeEndSpinBox;
    QSpacerItem *spacerItem1;
    QGroupBox *OptionsGroupBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *ClipsCheckBox;
    QCheckBox *AutomationCheckBox;
    QCheckBox *LoopCheckBox;
    QCheckBox *PunchCheckBox;
    QCheckBox *MarkersCheckBox;
    QCheckBox *TempoMapCheckBox;
    QGroupBox *FormatGroupBox;
    QVBoxLayout *vboxLayout1;
    QComboBox *FormatComboBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorEditRangeForm)
    {
        if (qtractorEditRangeForm->objectName().isEmpty())
            qtractorEditRangeForm->setObjectName(QString::fromUtf8("qtractorEditRangeForm"));
        qtractorEditRangeForm->resize(340, 280);
        qtractorEditRangeForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorEditRangeForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorEditRangeForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        RangeGroupBox = new QGroupBox(qtractorEditRangeForm);
        RangeGroupBox->setObjectName(QString::fromUtf8("RangeGroupBox"));
        gridLayout1 = new QGridLayout(RangeGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        SelectionRangeRadioButton = new QRadioButton(RangeGroupBox);
        SelectionRangeRadioButton->setObjectName(QString::fromUtf8("SelectionRangeRadioButton"));
        SelectionRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(SelectionRangeRadioButton, 0, 0, 1, 3);

        LoopRangeRadioButton = new QRadioButton(RangeGroupBox);
        LoopRangeRadioButton->setObjectName(QString::fromUtf8("LoopRangeRadioButton"));
        LoopRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(LoopRangeRadioButton, 1, 0, 1, 2);

        PunchRangeRadioButton = new QRadioButton(RangeGroupBox);
        PunchRangeRadioButton->setObjectName(QString::fromUtf8("PunchRangeRadioButton"));
        PunchRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(PunchRangeRadioButton, 2, 0, 1, 3);

        EditRangeRadioButton = new QRadioButton(RangeGroupBox);
        EditRangeRadioButton->setObjectName(QString::fromUtf8("EditRangeRadioButton"));
        EditRangeRadioButton->setChecked(false);

        gridLayout1->addWidget(EditRangeRadioButton, 3, 0, 1, 2);

        CustomRangeRadioButton = new QRadioButton(RangeGroupBox);
        CustomRangeRadioButton->setObjectName(QString::fromUtf8("CustomRangeRadioButton"));
        CustomRangeRadioButton->setChecked(true);

        gridLayout1->addWidget(CustomRangeRadioButton, 4, 0, 1, 3);

        RangeStartTextLabel = new QLabel(RangeGroupBox);
        RangeStartTextLabel->setObjectName(QString::fromUtf8("RangeStartTextLabel"));

        gridLayout1->addWidget(RangeStartTextLabel, 5, 1, 1, 1);

        RangeStartSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        RangeStartSpinBox->setObjectName(QString::fromUtf8("RangeStartSpinBox"));
        RangeStartSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(RangeStartSpinBox, 5, 2, 2, 1);

        spacerItem = new QSpacerItem(14, 14, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 6, 0, 2, 1);

        RangeEndTextLabel = new QLabel(RangeGroupBox);
        RangeEndTextLabel->setObjectName(QString::fromUtf8("RangeEndTextLabel"));

        gridLayout1->addWidget(RangeEndTextLabel, 7, 1, 1, 1);

        RangeEndSpinBox = new qtractorTimeSpinBox(RangeGroupBox);
        RangeEndSpinBox->setObjectName(QString::fromUtf8("RangeEndSpinBox"));
        RangeEndSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(RangeEndSpinBox, 7, 2, 1, 1);

        spacerItem1 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem1, 8, 0, 1, 3);


        gridLayout->addWidget(RangeGroupBox, 0, 0, 2, 1);

        OptionsGroupBox = new QGroupBox(qtractorEditRangeForm);
        OptionsGroupBox->setObjectName(QString::fromUtf8("OptionsGroupBox"));
        vboxLayout = new QVBoxLayout(OptionsGroupBox);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ClipsCheckBox = new QCheckBox(OptionsGroupBox);
        ClipsCheckBox->setObjectName(QString::fromUtf8("ClipsCheckBox"));
        ClipsCheckBox->setChecked(true);

        vboxLayout->addWidget(ClipsCheckBox);

        AutomationCheckBox = new QCheckBox(OptionsGroupBox);
        AutomationCheckBox->setObjectName(QString::fromUtf8("AutomationCheckBox"));
        AutomationCheckBox->setChecked(true);

        vboxLayout->addWidget(AutomationCheckBox);

        LoopCheckBox = new QCheckBox(OptionsGroupBox);
        LoopCheckBox->setObjectName(QString::fromUtf8("LoopCheckBox"));

        vboxLayout->addWidget(LoopCheckBox);

        PunchCheckBox = new QCheckBox(OptionsGroupBox);
        PunchCheckBox->setObjectName(QString::fromUtf8("PunchCheckBox"));

        vboxLayout->addWidget(PunchCheckBox);

        MarkersCheckBox = new QCheckBox(OptionsGroupBox);
        MarkersCheckBox->setObjectName(QString::fromUtf8("MarkersCheckBox"));

        vboxLayout->addWidget(MarkersCheckBox);

        TempoMapCheckBox = new QCheckBox(OptionsGroupBox);
        TempoMapCheckBox->setObjectName(QString::fromUtf8("TempoMapCheckBox"));

        vboxLayout->addWidget(TempoMapCheckBox);


        gridLayout->addWidget(OptionsGroupBox, 0, 1, 1, 1);

        FormatGroupBox = new QGroupBox(qtractorEditRangeForm);
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

        DialogButtonBox = new QDialogButtonBox(qtractorEditRangeForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(DialogButtonBox, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        RangeStartTextLabel->setBuddy(RangeStartSpinBox);
        RangeEndTextLabel->setBuddy(RangeEndSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(SelectionRangeRadioButton, LoopRangeRadioButton);
        QWidget::setTabOrder(LoopRangeRadioButton, PunchRangeRadioButton);
        QWidget::setTabOrder(PunchRangeRadioButton, EditRangeRadioButton);
        QWidget::setTabOrder(EditRangeRadioButton, CustomRangeRadioButton);
        QWidget::setTabOrder(CustomRangeRadioButton, RangeStartSpinBox);
        QWidget::setTabOrder(RangeStartSpinBox, RangeEndSpinBox);
        QWidget::setTabOrder(RangeEndSpinBox, ClipsCheckBox);
        QWidget::setTabOrder(ClipsCheckBox, AutomationCheckBox);
        QWidget::setTabOrder(AutomationCheckBox, LoopCheckBox);
        QWidget::setTabOrder(LoopCheckBox, PunchCheckBox);
        QWidget::setTabOrder(PunchCheckBox, MarkersCheckBox);
        QWidget::setTabOrder(MarkersCheckBox, TempoMapCheckBox);
        QWidget::setTabOrder(TempoMapCheckBox, FormatComboBox);
        QWidget::setTabOrder(FormatComboBox, DialogButtonBox);

        retranslateUi(qtractorEditRangeForm);

        QMetaObject::connectSlotsByName(qtractorEditRangeForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorEditRangeForm)
    {
        qtractorEditRangeForm->setWindowTitle(QCoreApplication::translate("qtractorEditRangeForm", "Edit Range", nullptr));
        RangeGroupBox->setTitle(QCoreApplication::translate("qtractorEditRangeForm", "Range", nullptr));
#if QT_CONFIG(tooltip)
        SelectionRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Selection range", nullptr));
#endif // QT_CONFIG(tooltip)
        SelectionRangeRadioButton->setText(QCoreApplication::translate("qtractorEditRangeForm", "&Selection", nullptr));
#if QT_CONFIG(tooltip)
        LoopRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Loop range", nullptr));
#endif // QT_CONFIG(tooltip)
        LoopRangeRadioButton->setText(QCoreApplication::translate("qtractorEditRangeForm", "&Loop", nullptr));
#if QT_CONFIG(tooltip)
        PunchRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Punch range", nullptr));
#endif // QT_CONFIG(tooltip)
        PunchRangeRadioButton->setText(QCoreApplication::translate("qtractorEditRangeForm", "&Punch", nullptr));
#if QT_CONFIG(tooltip)
        EditRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Edit range", nullptr));
#endif // QT_CONFIG(tooltip)
        EditRangeRadioButton->setText(QCoreApplication::translate("qtractorEditRangeForm", "&Edit", nullptr));
#if QT_CONFIG(tooltip)
        CustomRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Custom range", nullptr));
#endif // QT_CONFIG(tooltip)
        CustomRangeRadioButton->setText(QCoreApplication::translate("qtractorEditRangeForm", "&Custom", nullptr));
        RangeStartTextLabel->setText(QCoreApplication::translate("qtractorEditRangeForm", "St&art:", nullptr));
#if QT_CONFIG(tooltip)
        RangeStartSpinBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Clip start", nullptr));
#endif // QT_CONFIG(tooltip)
        RangeEndTextLabel->setText(QCoreApplication::translate("qtractorEditRangeForm", "En&d:", nullptr));
#if QT_CONFIG(tooltip)
        RangeEndSpinBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Clip offset", nullptr));
#endif // QT_CONFIG(tooltip)
        OptionsGroupBox->setTitle(QCoreApplication::translate("qtractorEditRangeForm", "Options", nullptr));
#if QT_CONFIG(tooltip)
        ClipsCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to clips in range", nullptr));
#endif // QT_CONFIG(tooltip)
        ClipsCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "Cl&ips", nullptr));
#if QT_CONFIG(tooltip)
        AutomationCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to Automation nodes in range", nullptr));
#endif // QT_CONFIG(tooltip)
        AutomationCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "A&utomation", nullptr));
#if QT_CONFIG(tooltip)
        LoopCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to Loop points in range", nullptr));
#endif // QT_CONFIG(tooltip)
        LoopCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "L&oop", nullptr));
#if QT_CONFIG(tooltip)
        PunchCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to Punch In/Out points in range", nullptr));
#endif // QT_CONFIG(tooltip)
        PunchCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "Pu&nch", nullptr));
#if QT_CONFIG(tooltip)
        MarkersCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to location Markers in range", nullptr));
#endif // QT_CONFIG(tooltip)
        MarkersCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "Mar&kers", nullptr));
#if QT_CONFIG(tooltip)
        TempoMapCheckBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Apply to Tempo Map nodes in range", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoMapCheckBox->setText(QCoreApplication::translate("qtractorEditRangeForm", "Te&mpo Map", nullptr));
        FormatGroupBox->setTitle(QCoreApplication::translate("qtractorEditRangeForm", "&Format", nullptr));
        FormatComboBox->setItemText(0, QCoreApplication::translate("qtractorEditRangeForm", "Frames", nullptr));
        FormatComboBox->setItemText(1, QCoreApplication::translate("qtractorEditRangeForm", "Time", nullptr));
        FormatComboBox->setItemText(2, QCoreApplication::translate("qtractorEditRangeForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        FormatComboBox->setToolTip(QCoreApplication::translate("qtractorEditRangeForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qtractorEditRangeForm: public Ui_qtractorEditRangeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTOREDITRANGEFORM_H
