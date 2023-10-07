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
** Form generated from reading UI file 'qtractorSessionForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORSESSIONFORM_H
#define UI_QTRACTORSESSIONFORM_H

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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorSessionForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *SessionTabWidget;
    QWidget *SessionTab;
    QVBoxLayout *vboxLayout1;
    QLabel *SessionNameTextLabel;
    QLineEdit *SessionNameLineEdit;
    QHBoxLayout *hboxLayout;
    QLabel *SessionDirTextLabel;
    QCheckBox *AutoSessionDirCheckBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QComboBox *SessionDirComboBox;
    QToolButton *SessionDirToolButton;
    QLabel *DescriptionTextLabel;
    QTextEdit *DescriptionTextEdit;
    QWidget *PropertiesTab;
    QHBoxLayout *hboxLayout2;
    QGroupBox *TimeGroupBox;
    QGridLayout *gridLayout;
    QLabel *SampleRateTextLabel;
    QComboBox *SampleRateComboBox;
    QLabel *TempoTextLabel;
    qtractorTempoSpinBox *TempoSpinBox;
    QLabel *TicksPerBeatTextLabel;
    QSpinBox *TicksPerBeatSpinBox;
    QSpacerItem *spacerItem1;
    QGroupBox *ViewGroupBox;
    QGridLayout *gridLayout1;
    QLabel *SnapPerBeatTextLabel;
    QComboBox *SnapPerBeatComboBox;
    QLabel *PixelsPerBeatTextLabel;
    QSpinBox *PixelsPerBeatSpinBox;
    QLabel *HorizontalZoomTextLabel;
    QSpinBox *HorizontalZoomSpinBox;
    QLabel *VerticalZoomTextLabel;
    QSpinBox *VerticalZoomSpinBox;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorSessionForm)
    {
        if (qtractorSessionForm->objectName().isEmpty())
            qtractorSessionForm->setObjectName(QString::fromUtf8("qtractorSessionForm"));
        qtractorSessionForm->resize(480, 240);
        qtractorSessionForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorSessionForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorSessionForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        SessionTabWidget = new QTabWidget(qtractorSessionForm);
        SessionTabWidget->setObjectName(QString::fromUtf8("SessionTabWidget"));
        SessionTab = new QWidget();
        SessionTab->setObjectName(QString::fromUtf8("SessionTab"));
        vboxLayout1 = new QVBoxLayout(SessionTab);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        SessionNameTextLabel = new QLabel(SessionTab);
        SessionNameTextLabel->setObjectName(QString::fromUtf8("SessionNameTextLabel"));

        vboxLayout1->addWidget(SessionNameTextLabel);

        SessionNameLineEdit = new QLineEdit(SessionTab);
        SessionNameLineEdit->setObjectName(QString::fromUtf8("SessionNameLineEdit"));
        SessionNameLineEdit->setMinimumSize(QSize(320, 0));

        vboxLayout1->addWidget(SessionNameLineEdit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        SessionDirTextLabel = new QLabel(SessionTab);
        SessionDirTextLabel->setObjectName(QString::fromUtf8("SessionDirTextLabel"));

        hboxLayout->addWidget(SessionDirTextLabel);

        AutoSessionDirCheckBox = new QCheckBox(SessionTab);
        AutoSessionDirCheckBox->setObjectName(QString::fromUtf8("AutoSessionDirCheckBox"));

        hboxLayout->addWidget(AutoSessionDirCheckBox);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        SessionDirComboBox = new QComboBox(SessionTab);
        SessionDirComboBox->setObjectName(QString::fromUtf8("SessionDirComboBox"));
        SessionDirComboBox->setMinimumSize(QSize(320, 0));
        SessionDirComboBox->setEditable(true);

        hboxLayout1->addWidget(SessionDirComboBox);

        SessionDirToolButton = new QToolButton(SessionTab);
        SessionDirToolButton->setObjectName(QString::fromUtf8("SessionDirToolButton"));
        SessionDirToolButton->setMinimumSize(QSize(22, 22));
        SessionDirToolButton->setMaximumSize(QSize(24, 24));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/fileOpen.png"));
        SessionDirToolButton->setIcon(icon1);
        SessionDirToolButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(SessionDirToolButton);


        vboxLayout1->addLayout(hboxLayout1);

        DescriptionTextLabel = new QLabel(SessionTab);
        DescriptionTextLabel->setObjectName(QString::fromUtf8("DescriptionTextLabel"));

        vboxLayout1->addWidget(DescriptionTextLabel);

        DescriptionTextEdit = new QTextEdit(SessionTab);
        DescriptionTextEdit->setObjectName(QString::fromUtf8("DescriptionTextEdit"));

        vboxLayout1->addWidget(DescriptionTextEdit);

        SessionTabWidget->addTab(SessionTab, QString());
        PropertiesTab = new QWidget();
        PropertiesTab->setObjectName(QString::fromUtf8("PropertiesTab"));
        hboxLayout2 = new QHBoxLayout(PropertiesTab);
        hboxLayout2->setSpacing(4);
        hboxLayout2->setContentsMargins(8, 8, 8, 8);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        TimeGroupBox = new QGroupBox(PropertiesTab);
        TimeGroupBox->setObjectName(QString::fromUtf8("TimeGroupBox"));
        gridLayout = new QGridLayout(TimeGroupBox);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SampleRateTextLabel = new QLabel(TimeGroupBox);
        SampleRateTextLabel->setObjectName(QString::fromUtf8("SampleRateTextLabel"));
        SampleRateTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(SampleRateTextLabel, 0, 0, 1, 1);

        SampleRateComboBox = new QComboBox(TimeGroupBox);
        SampleRateComboBox->addItem(QString());
        SampleRateComboBox->addItem(QString());
        SampleRateComboBox->addItem(QString());
        SampleRateComboBox->addItem(QString());
        SampleRateComboBox->setObjectName(QString::fromUtf8("SampleRateComboBox"));
        SampleRateComboBox->setEditable(true);

        gridLayout->addWidget(SampleRateComboBox, 0, 1, 1, 1);

        TempoTextLabel = new QLabel(TimeGroupBox);
        TempoTextLabel->setObjectName(QString::fromUtf8("TempoTextLabel"));
        TempoTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TempoTextLabel, 1, 0, 1, 1);

        TempoSpinBox = new qtractorTempoSpinBox(TimeGroupBox);
        TempoSpinBox->setObjectName(QString::fromUtf8("TempoSpinBox"));
        TempoSpinBox->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(TempoSpinBox, 1, 1, 1, 1);

        TicksPerBeatTextLabel = new QLabel(TimeGroupBox);
        TicksPerBeatTextLabel->setObjectName(QString::fromUtf8("TicksPerBeatTextLabel"));
        TicksPerBeatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TicksPerBeatTextLabel, 2, 0, 1, 1);

        TicksPerBeatSpinBox = new QSpinBox(TimeGroupBox);
        TicksPerBeatSpinBox->setObjectName(QString::fromUtf8("TicksPerBeatSpinBox"));
        TicksPerBeatSpinBox->setMinimum(24);
        TicksPerBeatSpinBox->setMaximum(3840);
        TicksPerBeatSpinBox->setSingleStep(24);
        TicksPerBeatSpinBox->setValue(960);

        gridLayout->addWidget(TicksPerBeatSpinBox, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 0, 1, 2);


        hboxLayout2->addWidget(TimeGroupBox);

        ViewGroupBox = new QGroupBox(PropertiesTab);
        ViewGroupBox->setObjectName(QString::fromUtf8("ViewGroupBox"));
        gridLayout1 = new QGridLayout(ViewGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        SnapPerBeatTextLabel = new QLabel(ViewGroupBox);
        SnapPerBeatTextLabel->setObjectName(QString::fromUtf8("SnapPerBeatTextLabel"));
        SnapPerBeatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(SnapPerBeatTextLabel, 0, 0, 1, 1);

        SnapPerBeatComboBox = new QComboBox(ViewGroupBox);
        SnapPerBeatComboBox->setObjectName(QString::fromUtf8("SnapPerBeatComboBox"));
        SnapPerBeatComboBox->setEditable(false);

        gridLayout1->addWidget(SnapPerBeatComboBox, 0, 1, 1, 1);

        PixelsPerBeatTextLabel = new QLabel(ViewGroupBox);
        PixelsPerBeatTextLabel->setObjectName(QString::fromUtf8("PixelsPerBeatTextLabel"));
        PixelsPerBeatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(PixelsPerBeatTextLabel, 1, 0, 1, 1);

        PixelsPerBeatSpinBox = new QSpinBox(ViewGroupBox);
        PixelsPerBeatSpinBox->setObjectName(QString::fromUtf8("PixelsPerBeatSpinBox"));
        PixelsPerBeatSpinBox->setMinimum(4);
        PixelsPerBeatSpinBox->setMaximum(240);
        PixelsPerBeatSpinBox->setSingleStep(4);
        PixelsPerBeatSpinBox->setValue(32);

        gridLayout1->addWidget(PixelsPerBeatSpinBox, 1, 1, 1, 1);

        HorizontalZoomTextLabel = new QLabel(ViewGroupBox);
        HorizontalZoomTextLabel->setObjectName(QString::fromUtf8("HorizontalZoomTextLabel"));
        HorizontalZoomTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(HorizontalZoomTextLabel, 2, 0, 1, 1);

        HorizontalZoomSpinBox = new QSpinBox(ViewGroupBox);
        HorizontalZoomSpinBox->setObjectName(QString::fromUtf8("HorizontalZoomSpinBox"));
        HorizontalZoomSpinBox->setMinimum(10);
        HorizontalZoomSpinBox->setMaximum(1000);
        HorizontalZoomSpinBox->setSingleStep(10);
        HorizontalZoomSpinBox->setValue(100);

        gridLayout1->addWidget(HorizontalZoomSpinBox, 2, 1, 1, 1);

        VerticalZoomTextLabel = new QLabel(ViewGroupBox);
        VerticalZoomTextLabel->setObjectName(QString::fromUtf8("VerticalZoomTextLabel"));
        VerticalZoomTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(VerticalZoomTextLabel, 3, 0, 1, 1);

        VerticalZoomSpinBox = new QSpinBox(ViewGroupBox);
        VerticalZoomSpinBox->setObjectName(QString::fromUtf8("VerticalZoomSpinBox"));
        VerticalZoomSpinBox->setMinimum(10);
        VerticalZoomSpinBox->setMaximum(1000);
        VerticalZoomSpinBox->setSingleStep(10);
        VerticalZoomSpinBox->setValue(100);

        gridLayout1->addWidget(VerticalZoomSpinBox, 3, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem2, 4, 0, 1, 2);


        hboxLayout2->addWidget(ViewGroupBox);

        SessionTabWidget->addTab(PropertiesTab, QString());

        vboxLayout->addWidget(SessionTabWidget);

        DialogButtonBox = new QDialogButtonBox(qtractorSessionForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

#if QT_CONFIG(shortcut)
        SessionNameTextLabel->setBuddy(SessionNameLineEdit);
        SessionDirTextLabel->setBuddy(SessionDirComboBox);
        DescriptionTextLabel->setBuddy(DescriptionTextEdit);
        SampleRateTextLabel->setBuddy(SampleRateComboBox);
        TempoTextLabel->setBuddy(TempoSpinBox);
        TicksPerBeatTextLabel->setBuddy(TicksPerBeatSpinBox);
        SnapPerBeatTextLabel->setBuddy(SnapPerBeatComboBox);
        PixelsPerBeatTextLabel->setBuddy(PixelsPerBeatSpinBox);
        HorizontalZoomTextLabel->setBuddy(HorizontalZoomSpinBox);
        VerticalZoomTextLabel->setBuddy(VerticalZoomSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(SessionNameLineEdit, AutoSessionDirCheckBox);
        QWidget::setTabOrder(AutoSessionDirCheckBox, SessionDirComboBox);
        QWidget::setTabOrder(SessionDirComboBox, SessionDirToolButton);
        QWidget::setTabOrder(SessionDirToolButton, DescriptionTextEdit);
        QWidget::setTabOrder(DescriptionTextEdit, SampleRateComboBox);
        QWidget::setTabOrder(SampleRateComboBox, TempoSpinBox);
        QWidget::setTabOrder(TempoSpinBox, TicksPerBeatSpinBox);
        QWidget::setTabOrder(TicksPerBeatSpinBox, SnapPerBeatComboBox);
        QWidget::setTabOrder(SnapPerBeatComboBox, PixelsPerBeatSpinBox);
        QWidget::setTabOrder(PixelsPerBeatSpinBox, HorizontalZoomSpinBox);
        QWidget::setTabOrder(HorizontalZoomSpinBox, VerticalZoomSpinBox);
        QWidget::setTabOrder(VerticalZoomSpinBox, SessionTabWidget);
        QWidget::setTabOrder(SessionTabWidget, DialogButtonBox);

        retranslateUi(qtractorSessionForm);

        SessionTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qtractorSessionForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorSessionForm)
    {
        qtractorSessionForm->setWindowTitle(QCoreApplication::translate("qtractorSessionForm", "Session", nullptr));
        SessionNameTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Name:", nullptr));
#if QT_CONFIG(tooltip)
        SessionNameLineEdit->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Session name", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionDirTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Directory:", nullptr));
#if QT_CONFIG(tooltip)
        AutoSessionDirCheckBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Whether to auto-name the session directory", nullptr));
#endif // QT_CONFIG(tooltip)
        AutoSessionDirCheckBox->setText(QCoreApplication::translate("qtractorSessionForm", "&Auto", nullptr));
#if QT_CONFIG(tooltip)
        SessionDirComboBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Session directory", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SessionDirToolButton->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Browse for session directory", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionDirToolButton->setText(QCoreApplication::translate("qtractorSessionForm", "...", nullptr));
        DescriptionTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Description:", nullptr));
#if QT_CONFIG(tooltip)
        DescriptionTextEdit->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Session description", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionTabWidget->setTabText(SessionTabWidget->indexOf(SessionTab), QCoreApplication::translate("qtractorSessionForm", "Session", nullptr));
        TimeGroupBox->setTitle(QCoreApplication::translate("qtractorSessionForm", "Time", nullptr));
        SampleRateTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "Sample &Rate:", nullptr));
        SampleRateComboBox->setItemText(0, QCoreApplication::translate("qtractorSessionForm", "44100", nullptr));
        SampleRateComboBox->setItemText(1, QCoreApplication::translate("qtractorSessionForm", "48000", nullptr));
        SampleRateComboBox->setItemText(2, QCoreApplication::translate("qtractorSessionForm", "96000", nullptr));
        SampleRateComboBox->setItemText(3, QCoreApplication::translate("qtractorSessionForm", "192000", nullptr));

#if QT_CONFIG(tooltip)
        SampleRateComboBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Sample rate (Hz)", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Tempo:", nullptr));
#if QT_CONFIG(tooltip)
        TempoSpinBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Tempo (BPM) / Signature", nullptr));
#endif // QT_CONFIG(tooltip)
        TicksPerBeatTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "T&icks/Beat:", nullptr));
#if QT_CONFIG(tooltip)
        TicksPerBeatSpinBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Resolution (ticks/beat; tpqn)", nullptr));
#endif // QT_CONFIG(tooltip)
        ViewGroupBox->setTitle(QCoreApplication::translate("qtractorSessionForm", "View", nullptr));
        SnapPerBeatTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Snap/Beat:", nullptr));
#if QT_CONFIG(tooltip)
        SnapPerBeatComboBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Snap/beat", nullptr));
#endif // QT_CONFIG(tooltip)
        PixelsPerBeatTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Pixels/Beat:", nullptr));
#if QT_CONFIG(tooltip)
        PixelsPerBeatSpinBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Pixels/beat", nullptr));
#endif // QT_CONFIG(tooltip)
        HorizontalZoomTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Horizontal Zoom:", nullptr));
#if QT_CONFIG(tooltip)
        HorizontalZoomSpinBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Horizontal Zoom (%)", nullptr));
#endif // QT_CONFIG(tooltip)
        HorizontalZoomSpinBox->setSuffix(QCoreApplication::translate("qtractorSessionForm", " %", nullptr));
        VerticalZoomTextLabel->setText(QCoreApplication::translate("qtractorSessionForm", "&Vertical Zoom:", nullptr));
#if QT_CONFIG(tooltip)
        VerticalZoomSpinBox->setToolTip(QCoreApplication::translate("qtractorSessionForm", "Vertical Zoom (%)", nullptr));
#endif // QT_CONFIG(tooltip)
        VerticalZoomSpinBox->setSuffix(QCoreApplication::translate("qtractorSessionForm", " %", nullptr));
        SessionTabWidget->setTabText(SessionTabWidget->indexOf(PropertiesTab), QCoreApplication::translate("qtractorSessionForm", "Properties", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorSessionForm: public Ui_qtractorSessionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORSESSIONFORM_H
