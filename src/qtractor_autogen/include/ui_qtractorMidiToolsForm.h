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
** Form generated from reading UI file 'qtractorMidiToolsForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMIDITOOLSFORM_H
#define UI_QTRACTORMIDITOOLSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorMidiToolsForm
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QComboBox *PresetNameComboBox;
    QToolButton *PresetSaveToolButton;
    QToolButton *PresetDeleteToolButton;
    QSpacerItem *spacerItem;
    QTabWidget *ToolTabWidget;
    QWidget *Quantize;
    QGridLayout *gridLayout;
    QCheckBox *QuantizeCheckBox;
    QSpacerItem *spacerItem1;
    QCheckBox *QuantizeTimeCheckBox;
    QComboBox *QuantizeTimeComboBox;
    QDoubleSpinBox *QuantizeTimeSpinBox;
    QSpacerItem *spacerItem2;
    QCheckBox *QuantizeDurationCheckBox;
    QComboBox *QuantizeDurationComboBox;
    QDoubleSpinBox *QuantizeDurationSpinBox;
    QCheckBox *QuantizeSwingCheckBox;
    QComboBox *QuantizeSwingComboBox;
    QDoubleSpinBox *QuantizeSwingSpinBox;
    QComboBox *QuantizeSwingTypeComboBox;
    QSpacerItem *spacerItem3;
    QCheckBox *QuantizeScaleCheckBox;
    QComboBox *QuantizeScaleKeyComboBox;
    QComboBox *QuantizeScaleComboBox;
    QSpacerItem *spacerItem4;
    QWidget *Transpose;
    QGridLayout *gridLayout1;
    QCheckBox *TransposeCheckBox;
    QSpacerItem *spacerItem5;
    QCheckBox *TransposeNoteCheckBox;
    QSpinBox *TransposeNoteSpinBox;
    QSpacerItem *spacerItem6;
    QCheckBox *TransposeTimeCheckBox;
    qtractorTimeSpinBox *TransposeTimeSpinBox;
    QComboBox *TransposeFormatComboBox;
    QSpacerItem *spacerItem7;
    QCheckBox *TransposeReverseCheckBox;
    QSpacerItem *spacerItem8;
    QWidget *Normalize;
    QGridLayout *gridLayout2;
    QCheckBox *NormalizeCheckBox;
    QSpacerItem *spacerItem9;
    QCheckBox *NormalizePercentCheckBox;
    QDoubleSpinBox *NormalizePercentSpinBox;
    QSpacerItem *spacerItem10;
    QCheckBox *NormalizeValueCheckBox;
    QSpinBox *NormalizeValueSpinBox;
    QSpacerItem *spacerItem11;
    QWidget *Randomize;
    QGridLayout *gridLayout3;
    QCheckBox *RandomizeCheckBox;
    QSpacerItem *spacerItem12;
    QCheckBox *RandomizeNoteCheckBox;
    QDoubleSpinBox *RandomizeNoteSpinBox;
    QSpacerItem *spacerItem13;
    QCheckBox *RandomizeTimeCheckBox;
    QDoubleSpinBox *RandomizeTimeSpinBox;
    QCheckBox *RandomizeDurationCheckBox;
    QDoubleSpinBox *RandomizeDurationSpinBox;
    QCheckBox *RandomizeValueCheckBox;
    QDoubleSpinBox *RandomizeValueSpinBox;
    QSpacerItem *spacerItem14;
    QWidget *Resize;
    QGridLayout *gridLayout4;
    QCheckBox *ResizeCheckBox;
    QSpacerItem *spacerItem15;
    QCheckBox *ResizeDurationCheckBox;
    qtractorTimeSpinBox *ResizeDurationSpinBox;
    QComboBox *ResizeFormatComboBox;
    QSpacerItem *spacerItem16;
    QCheckBox *ResizeValueCheckBox;
    QSpinBox *ResizeValueSpinBox;
    QComboBox *ResizeValue2ComboBox;
    QSpinBox *ResizeValue2SpinBox;
    QSpacerItem *spacerItem17;
    QSpacerItem *spacerItem18;
    QWidget *Rescale;
    QGridLayout *gridLayout5;
    QCheckBox *RescaleCheckBox;
    QSpacerItem *spacerItem19;
    QCheckBox *RescaleTimeCheckBox;
    QDoubleSpinBox *RescaleTimeSpinBox;
    QSpacerItem *spacerItem20;
    QCheckBox *RescaleDurationCheckBox;
    QDoubleSpinBox *RescaleDurationSpinBox;
    QCheckBox *RescaleValueCheckBox;
    QDoubleSpinBox *RescaleValueSpinBox;
    QSpacerItem *spacerItem21;
    QWidget *Timeshift;
    QGridLayout *gridLayout6;
    QCheckBox *TimeshiftCheckBox;
    QSpacerItem *spacerItem22;
    QLabel *TimeshiftLabel;
    QDoubleSpinBox *TimeshiftSpinBox;
    QSlider *TimeshiftSlider;
    QFrame *TimeshiftFrame;
    QLabel *TimeshiftText;
    QCheckBox *TimeshiftDurationCheckBox;
    QSpacerItem *spacerItem23;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorMidiToolsForm)
    {
        if (qtractorMidiToolsForm->objectName().isEmpty())
            qtractorMidiToolsForm->setObjectName(QString::fromUtf8("qtractorMidiToolsForm"));
        qtractorMidiToolsForm->resize(480, 240);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractorMidiEditor.png"));
        qtractorMidiToolsForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorMidiToolsForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(2);
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        PresetNameComboBox = new QComboBox(qtractorMidiToolsForm);
        PresetNameComboBox->setObjectName(QString::fromUtf8("PresetNameComboBox"));
        PresetNameComboBox->setMinimumSize(QSize(160, 0));
        PresetNameComboBox->setEditable(true);

        hboxLayout->addWidget(PresetNameComboBox);

        PresetSaveToolButton = new QToolButton(qtractorMidiToolsForm);
        PresetSaveToolButton->setObjectName(QString::fromUtf8("PresetSaveToolButton"));
        PresetSaveToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formSave.png"));
        PresetSaveToolButton->setIcon(icon1);

        hboxLayout->addWidget(PresetSaveToolButton);

        PresetDeleteToolButton = new QToolButton(qtractorMidiToolsForm);
        PresetDeleteToolButton->setObjectName(QString::fromUtf8("PresetDeleteToolButton"));
        PresetDeleteToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        PresetDeleteToolButton->setIcon(icon2);

        hboxLayout->addWidget(PresetDeleteToolButton);

        spacerItem = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        ToolTabWidget = new QTabWidget(qtractorMidiToolsForm);
        ToolTabWidget->setObjectName(QString::fromUtf8("ToolTabWidget"));
        Quantize = new QWidget();
        Quantize->setObjectName(QString::fromUtf8("Quantize"));
        gridLayout = new QGridLayout(Quantize);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        QuantizeCheckBox = new QCheckBox(Quantize);
        QuantizeCheckBox->setObjectName(QString::fromUtf8("QuantizeCheckBox"));
        QFont font;
        font.setBold(true);
        QuantizeCheckBox->setFont(font);

        gridLayout->addWidget(QuantizeCheckBox, 0, 0, 1, 6);

        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

        QuantizeTimeCheckBox = new QCheckBox(Quantize);
        QuantizeTimeCheckBox->setObjectName(QString::fromUtf8("QuantizeTimeCheckBox"));

        gridLayout->addWidget(QuantizeTimeCheckBox, 1, 1, 1, 1);

        QuantizeTimeComboBox = new QComboBox(Quantize);
        QuantizeTimeComboBox->setObjectName(QString::fromUtf8("QuantizeTimeComboBox"));

        gridLayout->addWidget(QuantizeTimeComboBox, 1, 2, 1, 1);

        QuantizeTimeSpinBox = new QDoubleSpinBox(Quantize);
        QuantizeTimeSpinBox->setObjectName(QString::fromUtf8("QuantizeTimeSpinBox"));
        QuantizeTimeSpinBox->setMinimumSize(QSize(60, 0));
        QuantizeTimeSpinBox->setAccelerated(true);
        QuantizeTimeSpinBox->setDecimals(1);
        QuantizeTimeSpinBox->setMinimum(0.000000000000000);
        QuantizeTimeSpinBox->setMaximum(100.000000000000000);
        QuantizeTimeSpinBox->setSingleStep(0.100000000000000);
        QuantizeTimeSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(QuantizeTimeSpinBox, 1, 3, 1, 1);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 1, 4, 2, 2);

        QuantizeDurationCheckBox = new QCheckBox(Quantize);
        QuantizeDurationCheckBox->setObjectName(QString::fromUtf8("QuantizeDurationCheckBox"));

        gridLayout->addWidget(QuantizeDurationCheckBox, 2, 1, 1, 1);

        QuantizeDurationComboBox = new QComboBox(Quantize);
        QuantizeDurationComboBox->setObjectName(QString::fromUtf8("QuantizeDurationComboBox"));

        gridLayout->addWidget(QuantizeDurationComboBox, 2, 2, 1, 1);

        QuantizeDurationSpinBox = new QDoubleSpinBox(Quantize);
        QuantizeDurationSpinBox->setObjectName(QString::fromUtf8("QuantizeDurationSpinBox"));
        QuantizeDurationSpinBox->setMinimumSize(QSize(60, 0));
        QuantizeDurationSpinBox->setAccelerated(true);
        QuantizeDurationSpinBox->setDecimals(1);
        QuantizeDurationSpinBox->setMinimum(0.000000000000000);
        QuantizeDurationSpinBox->setMaximum(100.000000000000000);
        QuantizeDurationSpinBox->setSingleStep(0.100000000000000);
        QuantizeDurationSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(QuantizeDurationSpinBox, 2, 3, 1, 1);

        QuantizeSwingCheckBox = new QCheckBox(Quantize);
        QuantizeSwingCheckBox->setObjectName(QString::fromUtf8("QuantizeSwingCheckBox"));

        gridLayout->addWidget(QuantizeSwingCheckBox, 3, 1, 1, 1);

        QuantizeSwingComboBox = new QComboBox(Quantize);
        QuantizeSwingComboBox->setObjectName(QString::fromUtf8("QuantizeSwingComboBox"));

        gridLayout->addWidget(QuantizeSwingComboBox, 3, 2, 1, 1);

        QuantizeSwingSpinBox = new QDoubleSpinBox(Quantize);
        QuantizeSwingSpinBox->setObjectName(QString::fromUtf8("QuantizeSwingSpinBox"));
        QuantizeSwingSpinBox->setMinimumSize(QSize(60, 0));
        QuantizeSwingSpinBox->setAccelerated(true);
        QuantizeSwingSpinBox->setDecimals(1);
        QuantizeSwingSpinBox->setMinimum(-100.000000000000000);
        QuantizeSwingSpinBox->setMaximum(100.000000000000000);
        QuantizeSwingSpinBox->setSingleStep(0.100000000000000);
        QuantizeSwingSpinBox->setValue(0.000000000000000);

        gridLayout->addWidget(QuantizeSwingSpinBox, 3, 3, 1, 1);

        QuantizeSwingTypeComboBox = new QComboBox(Quantize);
        QuantizeSwingTypeComboBox->addItem(QString());
        QuantizeSwingTypeComboBox->addItem(QString());
        QuantizeSwingTypeComboBox->addItem(QString());
        QuantizeSwingTypeComboBox->setObjectName(QString::fromUtf8("QuantizeSwingTypeComboBox"));

        gridLayout->addWidget(QuantizeSwingTypeComboBox, 3, 4, 1, 1);

        spacerItem3 = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 3, 5, 1, 1);

        QuantizeScaleCheckBox = new QCheckBox(Quantize);
        QuantizeScaleCheckBox->setObjectName(QString::fromUtf8("QuantizeScaleCheckBox"));

        gridLayout->addWidget(QuantizeScaleCheckBox, 4, 1, 1, 1);

        QuantizeScaleKeyComboBox = new QComboBox(Quantize);
        QuantizeScaleKeyComboBox->setObjectName(QString::fromUtf8("QuantizeScaleKeyComboBox"));

        gridLayout->addWidget(QuantizeScaleKeyComboBox, 4, 2, 1, 1);

        QuantizeScaleComboBox = new QComboBox(Quantize);
        QuantizeScaleComboBox->setObjectName(QString::fromUtf8("QuantizeScaleComboBox"));

        gridLayout->addWidget(QuantizeScaleComboBox, 4, 3, 1, 2);

        spacerItem4 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem4, 5, 1, 1, 5);

        ToolTabWidget->addTab(Quantize, QString());
        Transpose = new QWidget();
        Transpose->setObjectName(QString::fromUtf8("Transpose"));
        gridLayout1 = new QGridLayout(Transpose);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        TransposeCheckBox = new QCheckBox(Transpose);
        TransposeCheckBox->setObjectName(QString::fromUtf8("TransposeCheckBox"));
        TransposeCheckBox->setFont(font);

        gridLayout1->addWidget(TransposeCheckBox, 0, 0, 1, 6);

        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem5, 1, 0, 1, 1);

        TransposeNoteCheckBox = new QCheckBox(Transpose);
        TransposeNoteCheckBox->setObjectName(QString::fromUtf8("TransposeNoteCheckBox"));

        gridLayout1->addWidget(TransposeNoteCheckBox, 1, 1, 1, 1);

        TransposeNoteSpinBox = new QSpinBox(Transpose);
        TransposeNoteSpinBox->setObjectName(QString::fromUtf8("TransposeNoteSpinBox"));
        TransposeNoteSpinBox->setMinimumSize(QSize(60, 0));
        TransposeNoteSpinBox->setMinimum(-64);
        TransposeNoteSpinBox->setMaximum(64);

        gridLayout1->addWidget(TransposeNoteSpinBox, 1, 2, 1, 1);

        spacerItem6 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem6, 1, 3, 1, 3);

        TransposeTimeCheckBox = new QCheckBox(Transpose);
        TransposeTimeCheckBox->setObjectName(QString::fromUtf8("TransposeTimeCheckBox"));

        gridLayout1->addWidget(TransposeTimeCheckBox, 2, 1, 1, 1);

        TransposeTimeSpinBox = new qtractorTimeSpinBox(Transpose);
        TransposeTimeSpinBox->setObjectName(QString::fromUtf8("TransposeTimeSpinBox"));
        TransposeTimeSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout1->addWidget(TransposeTimeSpinBox, 2, 2, 1, 2);

        TransposeFormatComboBox = new QComboBox(Transpose);
        TransposeFormatComboBox->addItem(QString());
        TransposeFormatComboBox->addItem(QString());
        TransposeFormatComboBox->addItem(QString());
        TransposeFormatComboBox->setObjectName(QString::fromUtf8("TransposeFormatComboBox"));

        gridLayout1->addWidget(TransposeFormatComboBox, 2, 4, 1, 1);

        spacerItem7 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem7, 2, 5, 1, 1);

        TransposeReverseCheckBox = new QCheckBox(Transpose);
        TransposeReverseCheckBox->setObjectName(QString::fromUtf8("TransposeReverseCheckBox"));

        gridLayout1->addWidget(TransposeReverseCheckBox, 3, 1, 1, 3);

        spacerItem8 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem8, 4, 1, 1, 5);

        ToolTabWidget->addTab(Transpose, QString());
        Normalize = new QWidget();
        Normalize->setObjectName(QString::fromUtf8("Normalize"));
        gridLayout2 = new QGridLayout(Normalize);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(4, 4, 4, 4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        NormalizeCheckBox = new QCheckBox(Normalize);
        NormalizeCheckBox->setObjectName(QString::fromUtf8("NormalizeCheckBox"));
        NormalizeCheckBox->setFont(font);

        gridLayout2->addWidget(NormalizeCheckBox, 0, 0, 1, 4);

        spacerItem9 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem9, 1, 0, 1, 1);

        NormalizePercentCheckBox = new QCheckBox(Normalize);
        NormalizePercentCheckBox->setObjectName(QString::fromUtf8("NormalizePercentCheckBox"));

        gridLayout2->addWidget(NormalizePercentCheckBox, 1, 1, 1, 1);

        NormalizePercentSpinBox = new QDoubleSpinBox(Normalize);
        NormalizePercentSpinBox->setObjectName(QString::fromUtf8("NormalizePercentSpinBox"));
        NormalizePercentSpinBox->setMinimumSize(QSize(60, 0));
        NormalizePercentSpinBox->setAccelerated(true);
        NormalizePercentSpinBox->setDecimals(1);
        NormalizePercentSpinBox->setMaximum(150.000000000000000);
        NormalizePercentSpinBox->setSingleStep(0.100000000000000);

        gridLayout2->addWidget(NormalizePercentSpinBox, 1, 2, 1, 1);

        spacerItem10 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem10, 1, 3, 2, 1);

        NormalizeValueCheckBox = new QCheckBox(Normalize);
        NormalizeValueCheckBox->setObjectName(QString::fromUtf8("NormalizeValueCheckBox"));

        gridLayout2->addWidget(NormalizeValueCheckBox, 2, 1, 1, 1);

        NormalizeValueSpinBox = new QSpinBox(Normalize);
        NormalizeValueSpinBox->setObjectName(QString::fromUtf8("NormalizeValueSpinBox"));
        NormalizeValueSpinBox->setMinimumSize(QSize(60, 0));
        NormalizeValueSpinBox->setMaximum(127);

        gridLayout2->addWidget(NormalizeValueSpinBox, 2, 2, 1, 1);

        spacerItem11 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem11, 3, 1, 1, 3);

        ToolTabWidget->addTab(Normalize, QString());
        Randomize = new QWidget();
        Randomize->setObjectName(QString::fromUtf8("Randomize"));
        gridLayout3 = new QGridLayout(Randomize);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(4, 4, 4, 4);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        RandomizeCheckBox = new QCheckBox(Randomize);
        RandomizeCheckBox->setObjectName(QString::fromUtf8("RandomizeCheckBox"));
        RandomizeCheckBox->setFont(font);

        gridLayout3->addWidget(RandomizeCheckBox, 0, 0, 1, 4);

        spacerItem12 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem12, 1, 0, 1, 1);

        RandomizeNoteCheckBox = new QCheckBox(Randomize);
        RandomizeNoteCheckBox->setObjectName(QString::fromUtf8("RandomizeNoteCheckBox"));

        gridLayout3->addWidget(RandomizeNoteCheckBox, 1, 1, 1, 1);

        RandomizeNoteSpinBox = new QDoubleSpinBox(Randomize);
        RandomizeNoteSpinBox->setObjectName(QString::fromUtf8("RandomizeNoteSpinBox"));
        RandomizeNoteSpinBox->setMinimumSize(QSize(60, 0));
        RandomizeNoteSpinBox->setAccelerated(true);
        RandomizeNoteSpinBox->setDecimals(1);
        RandomizeNoteSpinBox->setMaximum(150.000000000000000);
        RandomizeNoteSpinBox->setSingleStep(0.100000000000000);

        gridLayout3->addWidget(RandomizeNoteSpinBox, 1, 2, 1, 1);

        spacerItem13 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem13, 1, 3, 4, 1);

        RandomizeTimeCheckBox = new QCheckBox(Randomize);
        RandomizeTimeCheckBox->setObjectName(QString::fromUtf8("RandomizeTimeCheckBox"));

        gridLayout3->addWidget(RandomizeTimeCheckBox, 2, 1, 1, 1);

        RandomizeTimeSpinBox = new QDoubleSpinBox(Randomize);
        RandomizeTimeSpinBox->setObjectName(QString::fromUtf8("RandomizeTimeSpinBox"));
        RandomizeTimeSpinBox->setMinimumSize(QSize(60, 0));
        RandomizeTimeSpinBox->setAccelerated(true);
        RandomizeTimeSpinBox->setDecimals(1);
        RandomizeTimeSpinBox->setMaximum(150.000000000000000);
        RandomizeTimeSpinBox->setSingleStep(0.100000000000000);

        gridLayout3->addWidget(RandomizeTimeSpinBox, 2, 2, 1, 1);

        RandomizeDurationCheckBox = new QCheckBox(Randomize);
        RandomizeDurationCheckBox->setObjectName(QString::fromUtf8("RandomizeDurationCheckBox"));

        gridLayout3->addWidget(RandomizeDurationCheckBox, 3, 1, 1, 1);

        RandomizeDurationSpinBox = new QDoubleSpinBox(Randomize);
        RandomizeDurationSpinBox->setObjectName(QString::fromUtf8("RandomizeDurationSpinBox"));
        RandomizeDurationSpinBox->setMinimumSize(QSize(60, 0));
        RandomizeDurationSpinBox->setAccelerated(true);
        RandomizeDurationSpinBox->setDecimals(1);
        RandomizeDurationSpinBox->setMaximum(150.000000000000000);
        RandomizeDurationSpinBox->setSingleStep(0.100000000000000);

        gridLayout3->addWidget(RandomizeDurationSpinBox, 3, 2, 1, 1);

        RandomizeValueCheckBox = new QCheckBox(Randomize);
        RandomizeValueCheckBox->setObjectName(QString::fromUtf8("RandomizeValueCheckBox"));

        gridLayout3->addWidget(RandomizeValueCheckBox, 4, 1, 1, 1);

        RandomizeValueSpinBox = new QDoubleSpinBox(Randomize);
        RandomizeValueSpinBox->setObjectName(QString::fromUtf8("RandomizeValueSpinBox"));
        RandomizeValueSpinBox->setMinimumSize(QSize(60, 0));
        RandomizeValueSpinBox->setAccelerated(true);
        RandomizeValueSpinBox->setDecimals(1);
        RandomizeValueSpinBox->setMaximum(150.000000000000000);
        RandomizeValueSpinBox->setSingleStep(0.100000000000000);

        gridLayout3->addWidget(RandomizeValueSpinBox, 4, 2, 1, 1);

        spacerItem14 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem14, 5, 1, 1, 3);

        ToolTabWidget->addTab(Randomize, QString());
        Resize = new QWidget();
        Resize->setObjectName(QString::fromUtf8("Resize"));
        gridLayout4 = new QGridLayout(Resize);
        gridLayout4->setSpacing(4);
        gridLayout4->setContentsMargins(4, 4, 4, 4);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        ResizeCheckBox = new QCheckBox(Resize);
        ResizeCheckBox->setObjectName(QString::fromUtf8("ResizeCheckBox"));
        ResizeCheckBox->setFont(font);

        gridLayout4->addWidget(ResizeCheckBox, 0, 0, 1, 7);

        spacerItem15 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem15, 1, 0, 1, 1);

        ResizeDurationCheckBox = new QCheckBox(Resize);
        ResizeDurationCheckBox->setObjectName(QString::fromUtf8("ResizeDurationCheckBox"));

        gridLayout4->addWidget(ResizeDurationCheckBox, 1, 1, 1, 1);

        ResizeDurationSpinBox = new qtractorTimeSpinBox(Resize);
        ResizeDurationSpinBox->setObjectName(QString::fromUtf8("ResizeDurationSpinBox"));
        ResizeDurationSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout4->addWidget(ResizeDurationSpinBox, 1, 2, 1, 2);

        ResizeFormatComboBox = new QComboBox(Resize);
        ResizeFormatComboBox->addItem(QString());
        ResizeFormatComboBox->addItem(QString());
        ResizeFormatComboBox->addItem(QString());
        ResizeFormatComboBox->setObjectName(QString::fromUtf8("ResizeFormatComboBox"));

        gridLayout4->addWidget(ResizeFormatComboBox, 1, 4, 1, 2);

        spacerItem16 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem16, 1, 6, 1, 1);

        ResizeValueCheckBox = new QCheckBox(Resize);
        ResizeValueCheckBox->setObjectName(QString::fromUtf8("ResizeValueCheckBox"));

        gridLayout4->addWidget(ResizeValueCheckBox, 2, 1, 1, 1);

        ResizeValueSpinBox = new QSpinBox(Resize);
        ResizeValueSpinBox->setObjectName(QString::fromUtf8("ResizeValueSpinBox"));
        ResizeValueSpinBox->setMinimumSize(QSize(60, 0));
        ResizeValueSpinBox->setMaximum(127);

        gridLayout4->addWidget(ResizeValueSpinBox, 2, 2, 1, 1);

        ResizeValue2ComboBox = new QComboBox(Resize);
        ResizeValue2ComboBox->addItem(QString());
        ResizeValue2ComboBox->addItem(QString());
        ResizeValue2ComboBox->setObjectName(QString::fromUtf8("ResizeValue2ComboBox"));

        gridLayout4->addWidget(ResizeValue2ComboBox, 2, 3, 1, 1);

        ResizeValue2SpinBox = new QSpinBox(Resize);
        ResizeValue2SpinBox->setObjectName(QString::fromUtf8("ResizeValue2SpinBox"));
        ResizeValue2SpinBox->setMinimumSize(QSize(60, 0));
        ResizeValue2SpinBox->setMaximum(127);

        gridLayout4->addWidget(ResizeValue2SpinBox, 2, 4, 1, 1);

        spacerItem17 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem17, 2, 5, 1, 2);

        spacerItem18 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem18, 3, 1, 1, 5);

        ToolTabWidget->addTab(Resize, QString());
        Rescale = new QWidget();
        Rescale->setObjectName(QString::fromUtf8("Rescale"));
        gridLayout5 = new QGridLayout(Rescale);
        gridLayout5->setSpacing(4);
        gridLayout5->setContentsMargins(4, 4, 4, 4);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        RescaleCheckBox = new QCheckBox(Rescale);
        RescaleCheckBox->setObjectName(QString::fromUtf8("RescaleCheckBox"));
        RescaleCheckBox->setFont(font);

        gridLayout5->addWidget(RescaleCheckBox, 0, 0, 1, 4);

        spacerItem19 = new QSpacerItem(16, 19, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem19, 1, 0, 1, 1);

        RescaleTimeCheckBox = new QCheckBox(Rescale);
        RescaleTimeCheckBox->setObjectName(QString::fromUtf8("RescaleTimeCheckBox"));

        gridLayout5->addWidget(RescaleTimeCheckBox, 1, 1, 1, 1);

        RescaleTimeSpinBox = new QDoubleSpinBox(Rescale);
        RescaleTimeSpinBox->setObjectName(QString::fromUtf8("RescaleTimeSpinBox"));
        RescaleTimeSpinBox->setMinimumSize(QSize(60, 0));
        RescaleTimeSpinBox->setAccelerated(true);
        RescaleTimeSpinBox->setDecimals(1);
        RescaleTimeSpinBox->setMinimum(0.100000000000000);
        RescaleTimeSpinBox->setMaximum(1000.000000000000000);
        RescaleTimeSpinBox->setSingleStep(0.100000000000000);
        RescaleTimeSpinBox->setValue(100.000000000000000);

        gridLayout5->addWidget(RescaleTimeSpinBox, 1, 2, 1, 1);

        spacerItem20 = new QSpacerItem(224, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem20, 1, 3, 3, 1);

        RescaleDurationCheckBox = new QCheckBox(Rescale);
        RescaleDurationCheckBox->setObjectName(QString::fromUtf8("RescaleDurationCheckBox"));

        gridLayout5->addWidget(RescaleDurationCheckBox, 2, 1, 1, 1);

        RescaleDurationSpinBox = new QDoubleSpinBox(Rescale);
        RescaleDurationSpinBox->setObjectName(QString::fromUtf8("RescaleDurationSpinBox"));
        RescaleDurationSpinBox->setMinimumSize(QSize(60, 0));
        RescaleDurationSpinBox->setAccelerated(true);
        RescaleDurationSpinBox->setDecimals(1);
        RescaleDurationSpinBox->setMinimum(0.100000000000000);
        RescaleDurationSpinBox->setMaximum(1000.000000000000000);
        RescaleDurationSpinBox->setSingleStep(0.100000000000000);
        RescaleDurationSpinBox->setValue(100.000000000000000);

        gridLayout5->addWidget(RescaleDurationSpinBox, 2, 2, 1, 1);

        RescaleValueCheckBox = new QCheckBox(Rescale);
        RescaleValueCheckBox->setObjectName(QString::fromUtf8("RescaleValueCheckBox"));

        gridLayout5->addWidget(RescaleValueCheckBox, 3, 1, 1, 1);

        RescaleValueSpinBox = new QDoubleSpinBox(Rescale);
        RescaleValueSpinBox->setObjectName(QString::fromUtf8("RescaleValueSpinBox"));
        RescaleValueSpinBox->setMinimumSize(QSize(60, 0));
        RescaleValueSpinBox->setAccelerated(true);
        RescaleValueSpinBox->setDecimals(1);
        RescaleValueSpinBox->setMinimum(0.100000000000000);
        RescaleValueSpinBox->setMaximum(1000.000000000000000);
        RescaleValueSpinBox->setSingleStep(0.100000000000000);
        RescaleValueSpinBox->setValue(100.000000000000000);

        gridLayout5->addWidget(RescaleValueSpinBox, 3, 2, 1, 1);

        spacerItem21 = new QSpacerItem(358, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem21, 4, 1, 1, 3);

        ToolTabWidget->addTab(Rescale, QString());
        Timeshift = new QWidget();
        Timeshift->setObjectName(QString::fromUtf8("Timeshift"));
        gridLayout6 = new QGridLayout(Timeshift);
        gridLayout6->setSpacing(4);
        gridLayout6->setContentsMargins(4, 4, 4, 4);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        TimeshiftCheckBox = new QCheckBox(Timeshift);
        TimeshiftCheckBox->setObjectName(QString::fromUtf8("TimeshiftCheckBox"));
        TimeshiftCheckBox->setFont(font);

        gridLayout6->addWidget(TimeshiftCheckBox, 0, 0, 1, 5);

        spacerItem22 = new QSpacerItem(16, 19, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem22, 1, 0, 1, 1);

        TimeshiftLabel = new QLabel(Timeshift);
        TimeshiftLabel->setObjectName(QString::fromUtf8("TimeshiftLabel"));

        gridLayout6->addWidget(TimeshiftLabel, 1, 1, 1, 1);

        TimeshiftSpinBox = new QDoubleSpinBox(Timeshift);
        TimeshiftSpinBox->setObjectName(QString::fromUtf8("TimeshiftSpinBox"));
        TimeshiftSpinBox->setMinimumSize(QSize(60, 0));
        TimeshiftSpinBox->setAccelerated(true);
        TimeshiftSpinBox->setDecimals(1);
        TimeshiftSpinBox->setMinimum(-100.000000000000000);
        TimeshiftSpinBox->setMaximum(100.000000000000000);
        TimeshiftSpinBox->setSingleStep(0.100000000000000);
        TimeshiftSpinBox->setValue(0.000000000000000);

        gridLayout6->addWidget(TimeshiftSpinBox, 1, 2, 1, 1);

        TimeshiftSlider = new QSlider(Timeshift);
        TimeshiftSlider->setObjectName(QString::fromUtf8("TimeshiftSlider"));
        TimeshiftSlider->setMinimum(-10000);
        TimeshiftSlider->setMaximum(10000);
        TimeshiftSlider->setSingleStep(10);
        TimeshiftSlider->setPageStep(100);
        TimeshiftSlider->setValue(0);
        TimeshiftSlider->setOrientation(Qt::Horizontal);

        gridLayout6->addWidget(TimeshiftSlider, 1, 3, 1, 1);

        TimeshiftFrame = new QFrame(Timeshift);
        TimeshiftFrame->setObjectName(QString::fromUtf8("TimeshiftFrame"));
        TimeshiftFrame->setMinimumSize(QSize(80, 80));
        TimeshiftFrame->setMaximumSize(QSize(80, 80));
        TimeshiftFrame->setFrameShape(QFrame::Panel);
        TimeshiftFrame->setFrameShadow(QFrame::Sunken);

        gridLayout6->addWidget(TimeshiftFrame, 1, 4, 2, 1);

        TimeshiftText = new QLabel(Timeshift);
        TimeshiftText->setObjectName(QString::fromUtf8("TimeshiftText"));

        gridLayout6->addWidget(TimeshiftText, 2, 2, 1, 2);

        TimeshiftDurationCheckBox = new QCheckBox(Timeshift);
        TimeshiftDurationCheckBox->setObjectName(QString::fromUtf8("TimeshiftDurationCheckBox"));

        gridLayout6->addWidget(TimeshiftDurationCheckBox, 3, 1, 1, 4);

        spacerItem23 = new QSpacerItem(358, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout6->addItem(spacerItem23, 4, 1, 1, 4);

        ToolTabWidget->addTab(Timeshift, QString());

        vboxLayout->addWidget(ToolTabWidget);

        DialogButtonBox = new QDialogButtonBox(qtractorMidiToolsForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

        QWidget::setTabOrder(PresetNameComboBox, PresetSaveToolButton);
        QWidget::setTabOrder(PresetSaveToolButton, PresetDeleteToolButton);
        QWidget::setTabOrder(PresetDeleteToolButton, ToolTabWidget);
        QWidget::setTabOrder(ToolTabWidget, QuantizeCheckBox);
        QWidget::setTabOrder(QuantizeCheckBox, QuantizeTimeCheckBox);
        QWidget::setTabOrder(QuantizeTimeCheckBox, QuantizeTimeComboBox);
        QWidget::setTabOrder(QuantizeTimeComboBox, QuantizeTimeSpinBox);
        QWidget::setTabOrder(QuantizeTimeSpinBox, QuantizeDurationCheckBox);
        QWidget::setTabOrder(QuantizeDurationCheckBox, QuantizeDurationComboBox);
        QWidget::setTabOrder(QuantizeDurationComboBox, QuantizeDurationSpinBox);
        QWidget::setTabOrder(QuantizeDurationSpinBox, QuantizeSwingCheckBox);
        QWidget::setTabOrder(QuantizeSwingCheckBox, QuantizeSwingComboBox);
        QWidget::setTabOrder(QuantizeSwingComboBox, QuantizeSwingSpinBox);
        QWidget::setTabOrder(QuantizeSwingSpinBox, QuantizeSwingTypeComboBox);
        QWidget::setTabOrder(QuantizeSwingTypeComboBox, QuantizeScaleCheckBox);
        QWidget::setTabOrder(QuantizeScaleCheckBox, QuantizeScaleKeyComboBox);
        QWidget::setTabOrder(QuantizeScaleKeyComboBox, QuantizeScaleComboBox);
        QWidget::setTabOrder(QuantizeScaleComboBox, TransposeCheckBox);
        QWidget::setTabOrder(TransposeCheckBox, TransposeNoteCheckBox);
        QWidget::setTabOrder(TransposeNoteCheckBox, TransposeNoteSpinBox);
        QWidget::setTabOrder(TransposeNoteSpinBox, TransposeTimeCheckBox);
        QWidget::setTabOrder(TransposeTimeCheckBox, TransposeTimeSpinBox);
        QWidget::setTabOrder(TransposeTimeSpinBox, TransposeFormatComboBox);
        QWidget::setTabOrder(TransposeFormatComboBox, TransposeReverseCheckBox);
        QWidget::setTabOrder(TransposeReverseCheckBox, NormalizeCheckBox);
        QWidget::setTabOrder(NormalizeCheckBox, NormalizePercentCheckBox);
        QWidget::setTabOrder(NormalizePercentCheckBox, NormalizePercentSpinBox);
        QWidget::setTabOrder(NormalizePercentSpinBox, NormalizeValueCheckBox);
        QWidget::setTabOrder(NormalizeValueCheckBox, NormalizeValueSpinBox);
        QWidget::setTabOrder(NormalizeValueSpinBox, RandomizeCheckBox);
        QWidget::setTabOrder(RandomizeCheckBox, RandomizeNoteCheckBox);
        QWidget::setTabOrder(RandomizeNoteCheckBox, RandomizeNoteSpinBox);
        QWidget::setTabOrder(RandomizeNoteSpinBox, RandomizeTimeCheckBox);
        QWidget::setTabOrder(RandomizeTimeCheckBox, RandomizeTimeSpinBox);
        QWidget::setTabOrder(RandomizeTimeSpinBox, RandomizeDurationCheckBox);
        QWidget::setTabOrder(RandomizeDurationCheckBox, RandomizeDurationSpinBox);
        QWidget::setTabOrder(RandomizeDurationSpinBox, RandomizeValueCheckBox);
        QWidget::setTabOrder(RandomizeValueCheckBox, RandomizeValueSpinBox);
        QWidget::setTabOrder(RandomizeValueSpinBox, ResizeCheckBox);
        QWidget::setTabOrder(ResizeCheckBox, ResizeDurationCheckBox);
        QWidget::setTabOrder(ResizeDurationCheckBox, ResizeDurationSpinBox);
        QWidget::setTabOrder(ResizeDurationSpinBox, ResizeFormatComboBox);
        QWidget::setTabOrder(ResizeFormatComboBox, ResizeValueCheckBox);
        QWidget::setTabOrder(ResizeValueCheckBox, ResizeValueSpinBox);
        QWidget::setTabOrder(ResizeValueSpinBox, ResizeValue2ComboBox);
        QWidget::setTabOrder(ResizeValue2ComboBox, ResizeValue2SpinBox);
        QWidget::setTabOrder(ResizeValue2SpinBox, RescaleCheckBox);
        QWidget::setTabOrder(RescaleCheckBox, RescaleTimeCheckBox);
        QWidget::setTabOrder(RescaleTimeCheckBox, RescaleTimeSpinBox);
        QWidget::setTabOrder(RescaleTimeSpinBox, RescaleDurationCheckBox);
        QWidget::setTabOrder(RescaleDurationCheckBox, RescaleDurationSpinBox);
        QWidget::setTabOrder(RescaleDurationSpinBox, RescaleValueCheckBox);
        QWidget::setTabOrder(RescaleValueCheckBox, RescaleValueSpinBox);
        QWidget::setTabOrder(RescaleValueSpinBox, TimeshiftCheckBox);
        QWidget::setTabOrder(TimeshiftCheckBox, TimeshiftSpinBox);
        QWidget::setTabOrder(TimeshiftSpinBox, TimeshiftSlider);
        QWidget::setTabOrder(TimeshiftSlider, TimeshiftDurationCheckBox);
        QWidget::setTabOrder(TimeshiftDurationCheckBox, DialogButtonBox);

        retranslateUi(qtractorMidiToolsForm);

        ToolTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qtractorMidiToolsForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorMidiToolsForm)
    {
        qtractorMidiToolsForm->setWindowTitle(QCoreApplication::translate("qtractorMidiToolsForm", "MIDI Tools", nullptr));
#if QT_CONFIG(tooltip)
        PresetNameComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Preset name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PresetSaveToolButton->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Save preset", nullptr));
#endif // QT_CONFIG(tooltip)
        PresetSaveToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        PresetDeleteToolButton->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Delete preset", nullptr));
#endif // QT_CONFIG(tooltip)
        PresetDeleteToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        QuantizeCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Quantize selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        QuantizeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Quantize", nullptr));
        QuantizeTimeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Time:", nullptr));
#if QT_CONFIG(tooltip)
        QuantizeTimeComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Quantize time", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QuantizeTimeSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Quantize time percent", nullptr));
#endif // QT_CONFIG(tooltip)
        QuantizeTimeSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        QuantizeDurationCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Duration:", nullptr));
#if QT_CONFIG(tooltip)
        QuantizeDurationComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Quantize duration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QuantizeDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Quantize duration percent", nullptr));
#endif // QT_CONFIG(tooltip)
        QuantizeDurationSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        QuantizeSwingCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "S&wing:", nullptr));
#if QT_CONFIG(tooltip)
        QuantizeSwingComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Swing-quantize time", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QuantizeSwingSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Swing-quantize percent", nullptr));
#endif // QT_CONFIG(tooltip)
        QuantizeSwingSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        QuantizeSwingTypeComboBox->setItemText(0, QCoreApplication::translate("qtractorMidiToolsForm", "Linear", nullptr));
        QuantizeSwingTypeComboBox->setItemText(1, QCoreApplication::translate("qtractorMidiToolsForm", "Quadratic", nullptr));
        QuantizeSwingTypeComboBox->setItemText(2, QCoreApplication::translate("qtractorMidiToolsForm", "Cubic", nullptr));

#if QT_CONFIG(tooltip)
        QuantizeSwingTypeComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Swing-quantize type", nullptr));
#endif // QT_CONFIG(tooltip)
        QuantizeScaleCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Scale:", nullptr));
#if QT_CONFIG(tooltip)
        QuantizeScaleKeyComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Scale-quantize key", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        QuantizeScaleComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Scale-quantize type", nullptr));
#endif // QT_CONFIG(tooltip)
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Quantize), QCoreApplication::translate("qtractorMidiToolsForm", "&Quantize", nullptr));
#if QT_CONFIG(tooltip)
        TransposeCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Transpose selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        TransposeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Transpose", nullptr));
        TransposeNoteCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Note:", nullptr));
#if QT_CONFIG(tooltip)
        TransposeNoteSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Transpose note", nullptr));
#endif // QT_CONFIG(tooltip)
        TransposeTimeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Time:", nullptr));
#if QT_CONFIG(tooltip)
        TransposeTimeSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Transpose time", nullptr));
#endif // QT_CONFIG(tooltip)
        TransposeFormatComboBox->setItemText(0, QCoreApplication::translate("qtractorMidiToolsForm", "Frames", nullptr));
        TransposeFormatComboBox->setItemText(1, QCoreApplication::translate("qtractorMidiToolsForm", "Time", nullptr));
        TransposeFormatComboBox->setItemText(2, QCoreApplication::translate("qtractorMidiToolsForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        TransposeFormatComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Transpose time format", nullptr));
#endif // QT_CONFIG(tooltip)
        TransposeReverseCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Reverse", nullptr));
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Transpose), QCoreApplication::translate("qtractorMidiToolsForm", "&Transpose", nullptr));
#if QT_CONFIG(tooltip)
        NormalizeCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Normalize selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        NormalizeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Normalize", nullptr));
        NormalizePercentCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Percent:", nullptr));
#if QT_CONFIG(tooltip)
        NormalizePercentSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Normalize percent", nullptr));
#endif // QT_CONFIG(tooltip)
        NormalizePercentSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        NormalizeValueCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Value:", nullptr));
#if QT_CONFIG(tooltip)
        NormalizeValueSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Normalize value", nullptr));
#endif // QT_CONFIG(tooltip)
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Normalize), QCoreApplication::translate("qtractorMidiToolsForm", "&Normalize", nullptr));
#if QT_CONFIG(tooltip)
        RandomizeCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Randomize selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        RandomizeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Randomize", nullptr));
        RandomizeNoteCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Note:", nullptr));
#if QT_CONFIG(tooltip)
        RandomizeNoteSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Randomize note/pitch", nullptr));
#endif // QT_CONFIG(tooltip)
        RandomizeNoteSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        RandomizeTimeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Time:", nullptr));
#if QT_CONFIG(tooltip)
        RandomizeTimeSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Randomize time", nullptr));
#endif // QT_CONFIG(tooltip)
        RandomizeTimeSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        RandomizeDurationCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Duration:", nullptr));
#if QT_CONFIG(tooltip)
        RandomizeDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Randomize duration", nullptr));
#endif // QT_CONFIG(tooltip)
        RandomizeDurationSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        RandomizeValueCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Value:", nullptr));
#if QT_CONFIG(tooltip)
        RandomizeValueSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Randomize value", nullptr));
#endif // QT_CONFIG(tooltip)
        RandomizeValueSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Randomize), QCoreApplication::translate("qtractorMidiToolsForm", "&Randomize", nullptr));
#if QT_CONFIG(tooltip)
        ResizeCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        ResizeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "Resi&ze", nullptr));
        ResizeDurationCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Duration:", nullptr));
#if QT_CONFIG(tooltip)
        ResizeDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize duration", nullptr));
#endif // QT_CONFIG(tooltip)
        ResizeFormatComboBox->setItemText(0, QCoreApplication::translate("qtractorMidiToolsForm", "Frames", nullptr));
        ResizeFormatComboBox->setItemText(1, QCoreApplication::translate("qtractorMidiToolsForm", "Time", nullptr));
        ResizeFormatComboBox->setItemText(2, QCoreApplication::translate("qtractorMidiToolsForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        ResizeFormatComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize duration format", nullptr));
#endif // QT_CONFIG(tooltip)
        ResizeValueCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Value:", nullptr));
#if QT_CONFIG(tooltip)
        ResizeValueSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize value", nullptr));
#endif // QT_CONFIG(tooltip)
        ResizeValue2ComboBox->setItemText(0, QCoreApplication::translate("qtractorMidiToolsForm", "Flat", nullptr));
        ResizeValue2ComboBox->setItemText(1, QCoreApplication::translate("qtractorMidiToolsForm", "Ramp", nullptr));

#if QT_CONFIG(tooltip)
        ResizeValue2ComboBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize value mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ResizeValue2SpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Resize final value", nullptr));
#endif // QT_CONFIG(tooltip)
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Resize), QCoreApplication::translate("qtractorMidiToolsForm", "Resi&ze", nullptr));
#if QT_CONFIG(tooltip)
        RescaleCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Rescale selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        RescaleCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "Re&scale", nullptr));
        RescaleTimeCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Time:", nullptr));
#if QT_CONFIG(tooltip)
        RescaleTimeSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Rescale time", nullptr));
#endif // QT_CONFIG(tooltip)
        RescaleTimeSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        RescaleDurationCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Duration:", nullptr));
#if QT_CONFIG(tooltip)
        RescaleDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Rescale duration", nullptr));
#endif // QT_CONFIG(tooltip)
        RescaleDurationSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        RescaleValueCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "&Value:", nullptr));
#if QT_CONFIG(tooltip)
        RescaleValueSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Rescale value", nullptr));
#endif // QT_CONFIG(tooltip)
        RescaleValueSpinBox->setSuffix(QCoreApplication::translate("qtractorMidiToolsForm", " %", nullptr));
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Rescale), QCoreApplication::translate("qtractorMidiToolsForm", "Re&scale", nullptr));
#if QT_CONFIG(tooltip)
        TimeshiftCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift selected events", nullptr));
#endif // QT_CONFIG(tooltip)
        TimeshiftCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift", nullptr));
        TimeshiftLabel->setText(QCoreApplication::translate("qtractorMidiToolsForm", "P:", nullptr));
#if QT_CONFIG(tooltip)
        TimeshiftSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift parameter", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeshiftSlider->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift parameter (log)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimeshiftFrame->setToolTip(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift curve", nullptr));
#endif // QT_CONFIG(tooltip)
        TimeshiftText->setText(QCoreApplication::translate("qtractorMidiToolsForm", "P = 0 : no change.\n"
"P > 0 : accelerating shift.\n"
"P < 0 : slowing down shift.\n"
"Edit head/tail (blue) markers define the shift range.", nullptr));
        TimeshiftDurationCheckBox->setText(QCoreApplication::translate("qtractorMidiToolsForm", "Timeshift duration", nullptr));
        ToolTabWidget->setTabText(ToolTabWidget->indexOf(Timeshift), QCoreApplication::translate("qtractorMidiToolsForm", "T&imeshift", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorMidiToolsForm: public Ui_qtractorMidiToolsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMIDITOOLSFORM_H
