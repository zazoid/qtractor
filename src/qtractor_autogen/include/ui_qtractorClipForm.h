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
** Form generated from reading UI file 'qtractorClipForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORCLIPFORM_H
#define UI_QTRACTORCLIPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorClipForm
{
public:
    QGridLayout *gridLayout;
    QLabel *ClipNameTextLabel;
    QLineEdit *ClipNameLineEdit;
    QLabel *FilenameTextLabel;
    QComboBox *FilenameComboBox;
    QToolButton *FilenameToolButton;
    QSpacerItem *spacerItem;
    QLabel *TrackChannelTextLabel;
    QSpinBox *TrackChannelSpinBox;
    QGroupBox *ParamGroupBox;
    QGridLayout *gridLayout1;
    QLabel *ClipStartTextLabel;
    qtractorTimeSpinBox *ClipStartSpinBox;
    QSpacerItem *spacerItem1;
    QLabel *ClipGainTextLabel;
    QDoubleSpinBox *ClipGainSpinBox;
    QLabel *ClipOffsetTextLabel;
    qtractorTimeSpinBox *ClipOffsetSpinBox;
    QLabel *ClipPanningTextLabel;
    QDoubleSpinBox *ClipPanningSpinBox;
    QLabel *ClipLengthTextLabel;
    qtractorTimeSpinBox *ClipLengthSpinBox;
    QLabel *FormatTextLabel;
    QComboBox *FormatComboBox;
    QGroupBox *FadeInOutGroupBox;
    QGridLayout *gridLayout2;
    QLabel *FadeInTextLabel;
    qtractorTimeSpinBox *FadeInLengthSpinBox;
    QComboBox *FadeInTypeComboBox;
    QSpacerItem *spacerItem2;
    QLabel *FadeOutTextLabel;
    qtractorTimeSpinBox *FadeOutLengthSpinBox;
    QComboBox *FadeOutTypeComboBox;
    QGroupBox *AudioClipGroupBox;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem3;
    QLabel *TimeStretchTextLabel;
    QDoubleSpinBox *TimeStretchSpinBox;
    QLabel *PitchShiftTextLabel;
    QDoubleSpinBox *PitchShiftSpinBox;
    QCheckBox *WsolaTimeStretchCheckBox;
    QCheckBox *WsolaQuickSeekCheckBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorClipForm)
    {
        if (qtractorClipForm->objectName().isEmpty())
            qtractorClipForm->setObjectName(QString::fromUtf8("qtractorClipForm"));
        qtractorClipForm->resize(420, 540);
        qtractorClipForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/editClip.png"));
        qtractorClipForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorClipForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ClipNameTextLabel = new QLabel(qtractorClipForm);
        ClipNameTextLabel->setObjectName(QString::fromUtf8("ClipNameTextLabel"));

        gridLayout->addWidget(ClipNameTextLabel, 0, 0, 1, 10);

        ClipNameLineEdit = new QLineEdit(qtractorClipForm);
        ClipNameLineEdit->setObjectName(QString::fromUtf8("ClipNameLineEdit"));

        gridLayout->addWidget(ClipNameLineEdit, 1, 0, 1, 10);

        FilenameTextLabel = new QLabel(qtractorClipForm);
        FilenameTextLabel->setObjectName(QString::fromUtf8("FilenameTextLabel"));

        gridLayout->addWidget(FilenameTextLabel, 2, 0, 1, 10);

        FilenameComboBox = new QComboBox(qtractorClipForm);
        FilenameComboBox->setObjectName(QString::fromUtf8("FilenameComboBox"));
        FilenameComboBox->setEditable(true);

        gridLayout->addWidget(FilenameComboBox, 3, 0, 1, 9);

        FilenameToolButton = new QToolButton(qtractorClipForm);
        FilenameToolButton->setObjectName(QString::fromUtf8("FilenameToolButton"));
        FilenameToolButton->setMinimumSize(QSize(22, 22));
        FilenameToolButton->setMaximumSize(QSize(22, 22));
        FilenameToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/fileOpen.png"));
        FilenameToolButton->setIcon(icon1);

        gridLayout->addWidget(FilenameToolButton, 3, 9, 1, 1);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 4, 0, 1, 7);

        TrackChannelTextLabel = new QLabel(qtractorClipForm);
        TrackChannelTextLabel->setObjectName(QString::fromUtf8("TrackChannelTextLabel"));
        TrackChannelTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TrackChannelTextLabel, 4, 7, 1, 1);

        TrackChannelSpinBox = new QSpinBox(qtractorClipForm);
        TrackChannelSpinBox->setObjectName(QString::fromUtf8("TrackChannelSpinBox"));
        TrackChannelSpinBox->setMinimumSize(QSize(40, 0));

        gridLayout->addWidget(TrackChannelSpinBox, 4, 8, 1, 2);

        ParamGroupBox = new QGroupBox(qtractorClipForm);
        ParamGroupBox->setObjectName(QString::fromUtf8("ParamGroupBox"));
        gridLayout1 = new QGridLayout(ParamGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ClipStartTextLabel = new QLabel(ParamGroupBox);
        ClipStartTextLabel->setObjectName(QString::fromUtf8("ClipStartTextLabel"));
        ClipStartTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(ClipStartTextLabel, 0, 0, 1, 1);

        ClipStartSpinBox = new qtractorTimeSpinBox(ParamGroupBox);
        ClipStartSpinBox->setObjectName(QString::fromUtf8("ClipStartSpinBox"));
        ClipStartSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(ClipStartSpinBox, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 2, 3, 1);

        ClipGainTextLabel = new QLabel(ParamGroupBox);
        ClipGainTextLabel->setObjectName(QString::fromUtf8("ClipGainTextLabel"));
        ClipGainTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(ClipGainTextLabel, 0, 3, 1, 2);

        ClipGainSpinBox = new QDoubleSpinBox(ParamGroupBox);
        ClipGainSpinBox->setObjectName(QString::fromUtf8("ClipGainSpinBox"));
        ClipGainSpinBox->setMinimumSize(QSize(66, 0));
        ClipGainSpinBox->setAlignment(Qt::AlignCenter);
        ClipGainSpinBox->setAccelerated(true);
        ClipGainSpinBox->setDecimals(1);
        ClipGainSpinBox->setSingleStep(0.100000000000000);

        gridLayout1->addWidget(ClipGainSpinBox, 0, 5, 1, 1);

        ClipOffsetTextLabel = new QLabel(ParamGroupBox);
        ClipOffsetTextLabel->setObjectName(QString::fromUtf8("ClipOffsetTextLabel"));
        ClipOffsetTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(ClipOffsetTextLabel, 1, 0, 1, 1);

        ClipOffsetSpinBox = new qtractorTimeSpinBox(ParamGroupBox);
        ClipOffsetSpinBox->setObjectName(QString::fromUtf8("ClipOffsetSpinBox"));
        ClipOffsetSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(ClipOffsetSpinBox, 1, 1, 1, 1);

        ClipPanningTextLabel = new QLabel(ParamGroupBox);
        ClipPanningTextLabel->setObjectName(QString::fromUtf8("ClipPanningTextLabel"));
        ClipPanningTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(ClipPanningTextLabel, 1, 3, 1, 2);

        ClipPanningSpinBox = new QDoubleSpinBox(ParamGroupBox);
        ClipPanningSpinBox->setObjectName(QString::fromUtf8("ClipPanningSpinBox"));
        ClipPanningSpinBox->setMinimumSize(QSize(66, 0));
        ClipPanningSpinBox->setAlignment(Qt::AlignCenter);
        ClipPanningSpinBox->setAccelerated(false);
        ClipPanningSpinBox->setDecimals(1);
        ClipPanningSpinBox->setSingleStep(0.100000000000000);

        gridLayout1->addWidget(ClipPanningSpinBox, 1, 5, 1, 1);

        ClipLengthTextLabel = new QLabel(ParamGroupBox);
        ClipLengthTextLabel->setObjectName(QString::fromUtf8("ClipLengthTextLabel"));
        ClipLengthTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout1->addWidget(ClipLengthTextLabel, 2, 0, 1, 1);

        ClipLengthSpinBox = new qtractorTimeSpinBox(ParamGroupBox);
        ClipLengthSpinBox->setObjectName(QString::fromUtf8("ClipLengthSpinBox"));
        ClipLengthSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(ClipLengthSpinBox, 2, 1, 1, 1);

        FormatTextLabel = new QLabel(ParamGroupBox);
        FormatTextLabel->setObjectName(QString::fromUtf8("FormatTextLabel"));
        FormatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(FormatTextLabel, 2, 3, 1, 1);

        FormatComboBox = new QComboBox(ParamGroupBox);
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->addItem(QString());
        FormatComboBox->setObjectName(QString::fromUtf8("FormatComboBox"));

        gridLayout1->addWidget(FormatComboBox, 2, 4, 1, 2);


        gridLayout->addWidget(ParamGroupBox, 5, 0, 1, 10);

        FadeInOutGroupBox = new QGroupBox(qtractorClipForm);
        FadeInOutGroupBox->setObjectName(QString::fromUtf8("FadeInOutGroupBox"));
        gridLayout2 = new QGridLayout(FadeInOutGroupBox);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(8, 8, 8, 8);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        FadeInTextLabel = new QLabel(FadeInOutGroupBox);
        FadeInTextLabel->setObjectName(QString::fromUtf8("FadeInTextLabel"));
        FadeInTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout2->addWidget(FadeInTextLabel, 0, 0, 1, 1);

        FadeInLengthSpinBox = new qtractorTimeSpinBox(FadeInOutGroupBox);
        FadeInLengthSpinBox->setObjectName(QString::fromUtf8("FadeInLengthSpinBox"));
        FadeInLengthSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout2->addWidget(FadeInLengthSpinBox, 0, 1, 1, 1);

        FadeInTypeComboBox = new QComboBox(FadeInOutGroupBox);
        FadeInTypeComboBox->setObjectName(QString::fromUtf8("FadeInTypeComboBox"));

        gridLayout2->addWidget(FadeInTypeComboBox, 0, 2, 1, 1);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 3, 2, 1);

        FadeOutTextLabel = new QLabel(FadeInOutGroupBox);
        FadeOutTextLabel->setObjectName(QString::fromUtf8("FadeOutTextLabel"));
        FadeOutTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout2->addWidget(FadeOutTextLabel, 1, 0, 1, 1);

        FadeOutLengthSpinBox = new qtractorTimeSpinBox(FadeInOutGroupBox);
        FadeOutLengthSpinBox->setObjectName(QString::fromUtf8("FadeOutLengthSpinBox"));
        FadeOutLengthSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout2->addWidget(FadeOutLengthSpinBox, 1, 1, 1, 1);

        FadeOutTypeComboBox = new QComboBox(FadeInOutGroupBox);
        FadeOutTypeComboBox->setObjectName(QString::fromUtf8("FadeOutTypeComboBox"));

        gridLayout2->addWidget(FadeOutTypeComboBox, 1, 2, 1, 1);


        gridLayout->addWidget(FadeInOutGroupBox, 6, 0, 1, 10);

        AudioClipGroupBox = new QGroupBox(qtractorClipForm);
        AudioClipGroupBox->setObjectName(QString::fromUtf8("AudioClipGroupBox"));
        gridLayout3 = new QGridLayout(AudioClipGroupBox);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        spacerItem3 = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 0, 2, 1, 1);

        TimeStretchTextLabel = new QLabel(AudioClipGroupBox);
        TimeStretchTextLabel->setObjectName(QString::fromUtf8("TimeStretchTextLabel"));
        TimeStretchTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout3->addWidget(TimeStretchTextLabel, 0, 0, 1, 1);

        TimeStretchSpinBox = new QDoubleSpinBox(AudioClipGroupBox);
        TimeStretchSpinBox->setObjectName(QString::fromUtf8("TimeStretchSpinBox"));
        TimeStretchSpinBox->setMinimumSize(QSize(66, 0));
        TimeStretchSpinBox->setAccelerated(true);
        TimeStretchSpinBox->setDecimals(1);
        TimeStretchSpinBox->setMinimum(10.000000000000000);
        TimeStretchSpinBox->setMaximum(1000.000000000000000);
        TimeStretchSpinBox->setSingleStep(0.100000000000000);
        TimeStretchSpinBox->setValue(100.000000000000000);

        gridLayout3->addWidget(TimeStretchSpinBox, 0, 1, 1, 1);

        PitchShiftTextLabel = new QLabel(AudioClipGroupBox);
        PitchShiftTextLabel->setObjectName(QString::fromUtf8("PitchShiftTextLabel"));
        PitchShiftTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout3->addWidget(PitchShiftTextLabel, 0, 3, 1, 1);

        PitchShiftSpinBox = new QDoubleSpinBox(AudioClipGroupBox);
        PitchShiftSpinBox->setObjectName(QString::fromUtf8("PitchShiftSpinBox"));
        PitchShiftSpinBox->setMinimumSize(QSize(66, 0));
        PitchShiftSpinBox->setAccelerated(true);
        PitchShiftSpinBox->setDecimals(2);
        PitchShiftSpinBox->setMinimum(-40.000000000000000);
        PitchShiftSpinBox->setMaximum(40.000000000000000);
        PitchShiftSpinBox->setSingleStep(0.010000000000000);
        PitchShiftSpinBox->setValue(0.000000000000000);

        gridLayout3->addWidget(PitchShiftSpinBox, 0, 4, 1, 1);

        WsolaTimeStretchCheckBox = new QCheckBox(AudioClipGroupBox);
        WsolaTimeStretchCheckBox->setObjectName(QString::fromUtf8("WsolaTimeStretchCheckBox"));
        QFont font;
        font.setBold(false);
        WsolaTimeStretchCheckBox->setFont(font);

        gridLayout3->addWidget(WsolaTimeStretchCheckBox, 1, 0, 1, 4);

        WsolaQuickSeekCheckBox = new QCheckBox(AudioClipGroupBox);
        WsolaQuickSeekCheckBox->setObjectName(QString::fromUtf8("WsolaQuickSeekCheckBox"));
        WsolaQuickSeekCheckBox->setFont(font);

        gridLayout3->addWidget(WsolaQuickSeekCheckBox, 2, 0, 1, 4);


        gridLayout->addWidget(AudioClipGroupBox, 7, 0, 1, 10);

        DialogButtonBox = new QDialogButtonBox(qtractorClipForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(DialogButtonBox, 8, 0, 1, 10);

#if QT_CONFIG(shortcut)
        ClipNameTextLabel->setBuddy(ClipNameLineEdit);
        FilenameTextLabel->setBuddy(FilenameComboBox);
        TrackChannelTextLabel->setBuddy(TrackChannelSpinBox);
        ClipStartTextLabel->setBuddy(ClipStartSpinBox);
        ClipGainTextLabel->setBuddy(ClipGainSpinBox);
        ClipOffsetTextLabel->setBuddy(ClipOffsetSpinBox);
        ClipPanningTextLabel->setBuddy(ClipPanningSpinBox);
        ClipLengthTextLabel->setBuddy(ClipLengthSpinBox);
        FormatTextLabel->setBuddy(FormatComboBox);
        FadeInTextLabel->setBuddy(FadeInLengthSpinBox);
        FadeOutTextLabel->setBuddy(FadeOutLengthSpinBox);
        TimeStretchTextLabel->setBuddy(TimeStretchSpinBox);
        PitchShiftTextLabel->setBuddy(PitchShiftSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(ClipNameLineEdit, FilenameComboBox);
        QWidget::setTabOrder(FilenameComboBox, FilenameToolButton);
        QWidget::setTabOrder(FilenameToolButton, TrackChannelSpinBox);
        QWidget::setTabOrder(TrackChannelSpinBox, ClipStartSpinBox);
        QWidget::setTabOrder(ClipStartSpinBox, ClipOffsetSpinBox);
        QWidget::setTabOrder(ClipOffsetSpinBox, ClipLengthSpinBox);
        QWidget::setTabOrder(ClipLengthSpinBox, ClipGainSpinBox);
        QWidget::setTabOrder(ClipGainSpinBox, ClipPanningSpinBox);
        QWidget::setTabOrder(ClipPanningSpinBox, FormatComboBox);
        QWidget::setTabOrder(FormatComboBox, FadeInLengthSpinBox);
        QWidget::setTabOrder(FadeInLengthSpinBox, FadeInTypeComboBox);
        QWidget::setTabOrder(FadeInTypeComboBox, FadeOutLengthSpinBox);
        QWidget::setTabOrder(FadeOutLengthSpinBox, FadeOutTypeComboBox);
        QWidget::setTabOrder(FadeOutTypeComboBox, TimeStretchSpinBox);
        QWidget::setTabOrder(TimeStretchSpinBox, PitchShiftSpinBox);
        QWidget::setTabOrder(PitchShiftSpinBox, WsolaTimeStretchCheckBox);
        QWidget::setTabOrder(WsolaTimeStretchCheckBox, WsolaQuickSeekCheckBox);
        QWidget::setTabOrder(WsolaQuickSeekCheckBox, DialogButtonBox);

        retranslateUi(qtractorClipForm);

        QMetaObject::connectSlotsByName(qtractorClipForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorClipForm)
    {
        qtractorClipForm->setWindowTitle(QCoreApplication::translate("qtractorClipForm", "Clip", nullptr));
        ClipNameTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&Name:", nullptr));
#if QT_CONFIG(tooltip)
        ClipNameLineEdit->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip name", nullptr));
#endif // QT_CONFIG(tooltip)
        FilenameTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&File:", nullptr));
#if QT_CONFIG(tooltip)
        FilenameComboBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip filename", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FilenameToolButton->setToolTip(QCoreApplication::translate("qtractorClipForm", "Browse for clip file", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackChannelTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Track/&Channel:", nullptr));
#if QT_CONFIG(tooltip)
        TrackChannelSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip track/channel", nullptr));
#endif // QT_CONFIG(tooltip)
        ParamGroupBox->setTitle(QCoreApplication::translate("qtractorClipForm", "Parameters", nullptr));
        ClipStartTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&Start:", nullptr));
#if QT_CONFIG(tooltip)
        ClipStartSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip start", nullptr));
#endif // QT_CONFIG(tooltip)
        ClipGainTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&Gain:", nullptr));
#if QT_CONFIG(tooltip)
        ClipGainSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip gain/volume", nullptr));
#endif // QT_CONFIG(tooltip)
        ClipOffsetTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Offs&et:", nullptr));
#if QT_CONFIG(tooltip)
        ClipOffsetSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip offset", nullptr));
#endif // QT_CONFIG(tooltip)
        ClipPanningTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&Panning:", nullptr));
#if QT_CONFIG(tooltip)
        ClipPanningSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip gain/volume", nullptr));
#endif // QT_CONFIG(tooltip)
        ClipLengthTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "&Length:", nullptr));
#if QT_CONFIG(tooltip)
        ClipLengthSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip length", nullptr));
#endif // QT_CONFIG(tooltip)
        FormatTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Forma&t:", nullptr));
        FormatComboBox->setItemText(0, QCoreApplication::translate("qtractorClipForm", "Frames", nullptr));
        FormatComboBox->setItemText(1, QCoreApplication::translate("qtractorClipForm", "Time", nullptr));
        FormatComboBox->setItemText(2, QCoreApplication::translate("qtractorClipForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        FormatComboBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
        FadeInOutGroupBox->setTitle(QCoreApplication::translate("qtractorClipForm", "Fade In/Out", nullptr));
        FadeInTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Fade &In:", nullptr));
#if QT_CONFIG(tooltip)
        FadeInLengthSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip fade-in length", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FadeInTypeComboBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip fade-in type", nullptr));
#endif // QT_CONFIG(tooltip)
        FadeOutTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Fade &Out:", nullptr));
#if QT_CONFIG(tooltip)
        FadeOutLengthSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip fade-out length", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FadeOutTypeComboBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip fade-out type", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioClipGroupBox->setTitle(QCoreApplication::translate("qtractorClipForm", "Audio", nullptr));
        TimeStretchTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Ti&me Stretch:", nullptr));
#if QT_CONFIG(tooltip)
        TimeStretchSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip time-stretch percentage", nullptr));
#endif // QT_CONFIG(tooltip)
        TimeStretchSpinBox->setSuffix(QCoreApplication::translate("qtractorClipForm", " %", nullptr));
        PitchShiftTextLabel->setText(QCoreApplication::translate("qtractorClipForm", "Pitch S&hift:", nullptr));
#if QT_CONFIG(tooltip)
        PitchShiftSpinBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Clip pitch-shift in semitones", nullptr));
#endif // QT_CONFIG(tooltip)
        PitchShiftSpinBox->setSuffix(QCoreApplication::translate("qtractorClipForm", " semitones", nullptr));
#if QT_CONFIG(tooltip)
        WsolaTimeStretchCheckBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Whether to use WSOLA time-stretching", nullptr));
#endif // QT_CONFIG(tooltip)
        WsolaTimeStretchCheckBox->setText(QCoreApplication::translate("qtractorClipForm", "&WSOLA time-stretching", nullptr));
#if QT_CONFIG(tooltip)
        WsolaQuickSeekCheckBox->setToolTip(QCoreApplication::translate("qtractorClipForm", "Whether to apply WSOLA quick seek time-stretching", nullptr));
#endif // QT_CONFIG(tooltip)
        WsolaQuickSeekCheckBox->setText(QCoreApplication::translate("qtractorClipForm", "WSOLA quic&k seek", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorClipForm: public Ui_qtractorClipForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORCLIPFORM_H
