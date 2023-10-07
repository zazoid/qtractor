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
** Form generated from reading UI file 'qtractorExportForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTOREXPORTFORM_H
#define UI_QTRACTOREXPORTFORM_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorComboBox.h"
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorExportForm
{
public:
    QGridLayout *gridLayout;
    QLabel *ExportPathTextLabel;
    QHBoxLayout *hboxLayout;
    QComboBox *ExportPathComboBox;
    QToolButton *ExportPathToolButton;
    QStackedWidget *ExportTypeWidget;
    QWidget *AudioExportTypePage;
    QGridLayout *gridLayout1;
    QLabel *AudioExportTypeTextLabel;
    qtractorAudioFileTypeComboBox *AudioExportTypeComboBox;
    QLabel *AudioExportFormatTextLabel;
    qtractorAudioFileFormatComboBox *AudioExportFormatComboBox;
    QLabel *AudioExportQualityTextLabel;
    QSpinBox *AudioExportQualitySpinBox;
    QSpacerItem *spacerItem;
    QWidget *MidiExportTypePage;
    QGridLayout *gridLayout2;
    QLabel *MidiExportFormatTextLabel;
    qtractorMidiFileFormatComboBox *MidiExportFormatComboBox;
    QSpacerItem *spacerItem1;
    QGroupBox *ExportRangeGroupBox;
    QGridLayout *gridLayout3;
    QRadioButton *SessionRangeRadioButton;
    QRadioButton *LoopRangeRadioButton;
    QRadioButton *PunchRangeRadioButton;
    QRadioButton *EditRangeRadioButton;
    QRadioButton *CustomRangeRadioButton;
    QSpacerItem *spacerItem2;
    QLabel *ExportStartTextLLabel;
    qtractorTimeSpinBox *ExportStartSpinBox;
    QLabel *ExportEndTextLLabel;
    qtractorTimeSpinBox *ExportEndSpinBox;
    QSpacerItem *spacerItem3;
    QGroupBox *ExportBusGroupBox;
    QHBoxLayout *hboxLayout1;
    QListWidget *ExportBusNameListBox;
    QGroupBox *FormatGroupBox;
    QVBoxLayout *vboxLayout;
    QComboBox *FormatComboBox;
    QHBoxLayout *hboxLayout2;
    QCheckBox *AddTrackCheckBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorExportForm)
    {
        if (qtractorExportForm->objectName().isEmpty())
            qtractorExportForm->setObjectName(QString::fromUtf8("qtractorExportForm"));
        qtractorExportForm->resize(440, 240);
        qtractorExportForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorExportForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorExportForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ExportPathTextLabel = new QLabel(qtractorExportForm);
        ExportPathTextLabel->setObjectName(QString::fromUtf8("ExportPathTextLabel"));

        gridLayout->addWidget(ExportPathTextLabel, 0, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ExportPathComboBox = new QComboBox(qtractorExportForm);
        ExportPathComboBox->setObjectName(QString::fromUtf8("ExportPathComboBox"));
        ExportPathComboBox->setMinimumSize(QSize(320, 22));
        ExportPathComboBox->setEditable(true);

        hboxLayout->addWidget(ExportPathComboBox);

        ExportPathToolButton = new QToolButton(qtractorExportForm);
        ExportPathToolButton->setObjectName(QString::fromUtf8("ExportPathToolButton"));
        ExportPathToolButton->setMinimumSize(QSize(22, 22));
        ExportPathToolButton->setMaximumSize(QSize(24, 24));
        ExportPathToolButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/fileOpen.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExportPathToolButton->setIcon(icon1);

        hboxLayout->addWidget(ExportPathToolButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

        ExportTypeWidget = new QStackedWidget(qtractorExportForm);
        ExportTypeWidget->setObjectName(QString::fromUtf8("ExportTypeWidget"));
        AudioExportTypePage = new QWidget();
        AudioExportTypePage->setObjectName(QString::fromUtf8("AudioExportTypePage"));
        gridLayout1 = new QGridLayout(AudioExportTypePage);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        AudioExportTypeTextLabel = new QLabel(AudioExportTypePage);
        AudioExportTypeTextLabel->setObjectName(QString::fromUtf8("AudioExportTypeTextLabel"));
        QFont font;
        font.setBold(false);
        AudioExportTypeTextLabel->setFont(font);
        AudioExportTypeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(AudioExportTypeTextLabel, 0, 0, 1, 1);

        AudioExportTypeComboBox = new qtractorAudioFileTypeComboBox(AudioExportTypePage);
        AudioExportTypeComboBox->setObjectName(QString::fromUtf8("AudioExportTypeComboBox"));
        AudioExportTypeComboBox->setFont(font);

        gridLayout1->addWidget(AudioExportTypeComboBox, 0, 1, 1, 3);

        AudioExportFormatTextLabel = new QLabel(AudioExportTypePage);
        AudioExportFormatTextLabel->setObjectName(QString::fromUtf8("AudioExportFormatTextLabel"));
        AudioExportFormatTextLabel->setFont(font);
        AudioExportFormatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(AudioExportFormatTextLabel, 1, 0, 1, 1);

        AudioExportFormatComboBox = new qtractorAudioFileFormatComboBox(AudioExportTypePage);
        AudioExportFormatComboBox->setObjectName(QString::fromUtf8("AudioExportFormatComboBox"));
        AudioExportFormatComboBox->setFont(font);

        gridLayout1->addWidget(AudioExportFormatComboBox, 1, 1, 1, 1);

        AudioExportQualityTextLabel = new QLabel(AudioExportTypePage);
        AudioExportQualityTextLabel->setObjectName(QString::fromUtf8("AudioExportQualityTextLabel"));
        AudioExportQualityTextLabel->setFont(font);
        AudioExportQualityTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(AudioExportQualityTextLabel, 1, 2, 1, 1);

        AudioExportQualitySpinBox = new QSpinBox(AudioExportTypePage);
        AudioExportQualitySpinBox->setObjectName(QString::fromUtf8("AudioExportQualitySpinBox"));
        AudioExportQualitySpinBox->setMaximumSize(QSize(60, 32767));
        AudioExportQualitySpinBox->setFont(font);
        AudioExportQualitySpinBox->setMinimum(0);
        AudioExportQualitySpinBox->setMaximum(10);
        AudioExportQualitySpinBox->setSingleStep(1);
        AudioExportQualitySpinBox->setValue(4);

        gridLayout1->addWidget(AudioExportQualitySpinBox, 1, 3, 1, 1);

        spacerItem = new QSpacerItem(22, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 4, 2, 1);

        ExportTypeWidget->addWidget(AudioExportTypePage);
        MidiExportTypePage = new QWidget();
        MidiExportTypePage->setObjectName(QString::fromUtf8("MidiExportTypePage"));
        gridLayout2 = new QGridLayout(MidiExportTypePage);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(4, 4, 4, 4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        MidiExportFormatTextLabel = new QLabel(MidiExportTypePage);
        MidiExportFormatTextLabel->setObjectName(QString::fromUtf8("MidiExportFormatTextLabel"));
        MidiExportFormatTextLabel->setFont(font);
        MidiExportFormatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout2->addWidget(MidiExportFormatTextLabel, 0, 0, 1, 2);

        MidiExportFormatComboBox = new qtractorMidiFileFormatComboBox(MidiExportTypePage);
        MidiExportFormatComboBox->setObjectName(QString::fromUtf8("MidiExportFormatComboBox"));
        MidiExportFormatComboBox->setFont(font);

        gridLayout2->addWidget(MidiExportFormatComboBox, 0, 2, 1, 1);

        spacerItem1 = new QSpacerItem(22, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 0, 3, 1, 1);

        ExportTypeWidget->addWidget(MidiExportTypePage);

        gridLayout->addWidget(ExportTypeWidget, 2, 0, 1, 2);

        ExportRangeGroupBox = new QGroupBox(qtractorExportForm);
        ExportRangeGroupBox->setObjectName(QString::fromUtf8("ExportRangeGroupBox"));
        gridLayout3 = new QGridLayout(ExportRangeGroupBox);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        SessionRangeRadioButton = new QRadioButton(ExportRangeGroupBox);
        SessionRangeRadioButton->setObjectName(QString::fromUtf8("SessionRangeRadioButton"));
        SessionRangeRadioButton->setChecked(false);

        gridLayout3->addWidget(SessionRangeRadioButton, 0, 0, 1, 3);

        LoopRangeRadioButton = new QRadioButton(ExportRangeGroupBox);
        LoopRangeRadioButton->setObjectName(QString::fromUtf8("LoopRangeRadioButton"));
        LoopRangeRadioButton->setChecked(false);

        gridLayout3->addWidget(LoopRangeRadioButton, 1, 0, 1, 3);

        PunchRangeRadioButton = new QRadioButton(ExportRangeGroupBox);
        PunchRangeRadioButton->setObjectName(QString::fromUtf8("PunchRangeRadioButton"));
        PunchRangeRadioButton->setChecked(false);

        gridLayout3->addWidget(PunchRangeRadioButton, 2, 0, 1, 3);

        EditRangeRadioButton = new QRadioButton(ExportRangeGroupBox);
        EditRangeRadioButton->setObjectName(QString::fromUtf8("EditRangeRadioButton"));
        EditRangeRadioButton->setChecked(false);

        gridLayout3->addWidget(EditRangeRadioButton, 3, 0, 1, 3);

        CustomRangeRadioButton = new QRadioButton(ExportRangeGroupBox);
        CustomRangeRadioButton->setObjectName(QString::fromUtf8("CustomRangeRadioButton"));
        CustomRangeRadioButton->setChecked(true);

        gridLayout3->addWidget(CustomRangeRadioButton, 4, 0, 1, 3);

        spacerItem2 = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem2, 5, 0, 2, 1);

        ExportStartTextLLabel = new QLabel(ExportRangeGroupBox);
        ExportStartTextLLabel->setObjectName(QString::fromUtf8("ExportStartTextLLabel"));

        gridLayout3->addWidget(ExportStartTextLLabel, 5, 1, 1, 1);

        ExportStartSpinBox = new qtractorTimeSpinBox(ExportRangeGroupBox);
        ExportStartSpinBox->setObjectName(QString::fromUtf8("ExportStartSpinBox"));
        ExportStartSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout3->addWidget(ExportStartSpinBox, 5, 2, 1, 1);

        ExportEndTextLLabel = new QLabel(ExportRangeGroupBox);
        ExportEndTextLLabel->setObjectName(QString::fromUtf8("ExportEndTextLLabel"));

        gridLayout3->addWidget(ExportEndTextLLabel, 6, 1, 1, 1);

        ExportEndSpinBox = new qtractorTimeSpinBox(ExportRangeGroupBox);
        ExportEndSpinBox->setObjectName(QString::fromUtf8("ExportEndSpinBox"));
        ExportEndSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout3->addWidget(ExportEndSpinBox, 6, 2, 1, 1);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem3, 0, 3, 7, 1);


        gridLayout->addWidget(ExportRangeGroupBox, 3, 0, 2, 1);

        ExportBusGroupBox = new QGroupBox(qtractorExportForm);
        ExportBusGroupBox->setObjectName(QString::fromUtf8("ExportBusGroupBox"));
        ExportBusGroupBox->setMinimumSize(QSize(160, 120));
        hboxLayout1 = new QHBoxLayout(ExportBusGroupBox);
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(4, 4, 4, 4);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ExportBusNameListBox = new QListWidget(ExportBusGroupBox);
        ExportBusNameListBox->setObjectName(QString::fromUtf8("ExportBusNameListBox"));
        ExportBusNameListBox->setSelectionMode(QAbstractItemView::ExtendedSelection);

        hboxLayout1->addWidget(ExportBusNameListBox);


        gridLayout->addWidget(ExportBusGroupBox, 3, 1, 1, 1);

        FormatGroupBox = new QGroupBox(qtractorExportForm);
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


        gridLayout->addWidget(FormatGroupBox, 4, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(4);
        hboxLayout2->setContentsMargins(8, 8, 8, 8);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        AddTrackCheckBox = new QCheckBox(qtractorExportForm);
        AddTrackCheckBox->setObjectName(QString::fromUtf8("AddTrackCheckBox"));

        hboxLayout2->addWidget(AddTrackCheckBox);

        DialogButtonBox = new QDialogButtonBox(qtractorExportForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(DialogButtonBox);


        gridLayout->addLayout(hboxLayout2, 5, 0, 1, 2);

#if QT_CONFIG(shortcut)
        ExportPathTextLabel->setBuddy(ExportPathComboBox);
        AudioExportTypeTextLabel->setBuddy(AudioExportTypeComboBox);
        AudioExportFormatTextLabel->setBuddy(AudioExportFormatComboBox);
        AudioExportQualityTextLabel->setBuddy(AudioExportQualitySpinBox);
        MidiExportFormatTextLabel->setBuddy(MidiExportFormatComboBox);
        ExportStartTextLLabel->setBuddy(ExportStartSpinBox);
        ExportEndTextLLabel->setBuddy(ExportEndSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(ExportPathComboBox, ExportPathToolButton);
        QWidget::setTabOrder(ExportPathToolButton, AudioExportTypeComboBox);
        QWidget::setTabOrder(AudioExportTypeComboBox, AudioExportFormatComboBox);
        QWidget::setTabOrder(AudioExportFormatComboBox, AudioExportQualitySpinBox);
        QWidget::setTabOrder(AudioExportQualitySpinBox, MidiExportFormatComboBox);
        QWidget::setTabOrder(MidiExportFormatComboBox, SessionRangeRadioButton);
        QWidget::setTabOrder(SessionRangeRadioButton, LoopRangeRadioButton);
        QWidget::setTabOrder(LoopRangeRadioButton, PunchRangeRadioButton);
        QWidget::setTabOrder(PunchRangeRadioButton, EditRangeRadioButton);
        QWidget::setTabOrder(EditRangeRadioButton, CustomRangeRadioButton);
        QWidget::setTabOrder(CustomRangeRadioButton, ExportStartSpinBox);
        QWidget::setTabOrder(ExportStartSpinBox, ExportEndSpinBox);
        QWidget::setTabOrder(ExportEndSpinBox, ExportBusNameListBox);
        QWidget::setTabOrder(ExportBusNameListBox, FormatComboBox);
        QWidget::setTabOrder(FormatComboBox, AddTrackCheckBox);

        retranslateUi(qtractorExportForm);

        QMetaObject::connectSlotsByName(qtractorExportForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorExportForm)
    {
        qtractorExportForm->setWindowTitle(QCoreApplication::translate("qtractorExportForm", "Export", nullptr));
        ExportPathTextLabel->setText(QCoreApplication::translate("qtractorExportForm", "&File:", nullptr));
#if QT_CONFIG(tooltip)
        ExportPathComboBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Export file name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ExportPathToolButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Browse export file name", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioExportTypeTextLabel->setText(QCoreApplication::translate("qtractorExportForm", "File &type:", nullptr));
#if QT_CONFIG(tooltip)
        AudioExportTypeComboBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Audio file type to use on export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioExportFormatTextLabel->setText(QCoreApplication::translate("qtractorExportForm", "Sample &format:", nullptr));
#if QT_CONFIG(tooltip)
        AudioExportFormatComboBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Audio sample format to use on export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioExportQualityTextLabel->setText(QCoreApplication::translate("qtractorExportForm", "&Quality:", nullptr));
#if QT_CONFIG(tooltip)
        AudioExportQualitySpinBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Audio compression quality to use on export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioExportQualitySpinBox->setSuffix(QString());
        MidiExportFormatTextLabel->setText(QCoreApplication::translate("qtractorExportForm", "File &format:", nullptr));
#if QT_CONFIG(tooltip)
        MidiExportFormatComboBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "MIDI file format to use on export", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportRangeGroupBox->setTitle(QCoreApplication::translate("qtractorExportForm", "Range", nullptr));
#if QT_CONFIG(tooltip)
        SessionRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Session range", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionRangeRadioButton->setText(QCoreApplication::translate("qtractorExportForm", "&Session", nullptr));
#if QT_CONFIG(tooltip)
        LoopRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Loop range", nullptr));
#endif // QT_CONFIG(tooltip)
        LoopRangeRadioButton->setText(QCoreApplication::translate("qtractorExportForm", "&Loop", nullptr));
#if QT_CONFIG(tooltip)
        PunchRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Punch range", nullptr));
#endif // QT_CONFIG(tooltip)
        PunchRangeRadioButton->setText(QCoreApplication::translate("qtractorExportForm", "&Punch", nullptr));
#if QT_CONFIG(tooltip)
        EditRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Edit range", nullptr));
#endif // QT_CONFIG(tooltip)
        EditRangeRadioButton->setText(QCoreApplication::translate("qtractorExportForm", "&Edit", nullptr));
#if QT_CONFIG(tooltip)
        CustomRangeRadioButton->setToolTip(QCoreApplication::translate("qtractorExportForm", "Custom range", nullptr));
#endif // QT_CONFIG(tooltip)
        CustomRangeRadioButton->setText(QCoreApplication::translate("qtractorExportForm", "&Custom", nullptr));
        ExportStartTextLLabel->setText(QCoreApplication::translate("qtractorExportForm", "St&art:", nullptr));
#if QT_CONFIG(tooltip)
        ExportStartSpinBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Custom start", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportEndTextLLabel->setText(QCoreApplication::translate("qtractorExportForm", "En&d:", nullptr));
#if QT_CONFIG(tooltip)
        ExportEndSpinBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Custom end", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportBusGroupBox->setTitle(QCoreApplication::translate("qtractorExportForm", "Outputs", nullptr));
#if QT_CONFIG(tooltip)
        ExportBusNameListBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Output bus names", nullptr));
#endif // QT_CONFIG(tooltip)
        FormatGroupBox->setTitle(QCoreApplication::translate("qtractorExportForm", "Format", nullptr));
        FormatComboBox->setItemText(0, QCoreApplication::translate("qtractorExportForm", "Frames", nullptr));
        FormatComboBox->setItemText(1, QCoreApplication::translate("qtractorExportForm", "Time", nullptr));
        FormatComboBox->setItemText(2, QCoreApplication::translate("qtractorExportForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        FormatComboBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AddTrackCheckBox->setToolTip(QCoreApplication::translate("qtractorExportForm", "Whether to add/import new track(s) with export result", nullptr));
#endif // QT_CONFIG(tooltip)
        AddTrackCheckBox->setText(QCoreApplication::translate("qtractorExportForm", "&Add new track(s)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorExportForm: public Ui_qtractorExportForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTOREXPORTFORM_H
