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
** Form generated from reading UI file 'qtractorMidiSysexForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMIDISYSEXFORM_H
#define UI_QTRACTORMIDISYSEXFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qtractorMidiSysexForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTreeWidget *SysexListView;
    QPushButton *ImportButton;
    QPushButton *ExportButton;
    QSpacerItem *spacerItem;
    QPushButton *MoveUpButton;
    QPushButton *MoveDownButton;
    QToolButton *OpenButton;
    QComboBox *NameComboBox;
    QToolButton *SaveButton;
    QToolButton *DeleteButton;
    QPushButton *AddButton;
    QTextEdit *SysexTextEdit;
    QPushButton *UpdateButton;
    QPushButton *RemoveButton;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorMidiSysexForm)
    {
        if (qtractorMidiSysexForm->objectName().isEmpty())
            qtractorMidiSysexForm->setObjectName(QString::fromUtf8("qtractorMidiSysexForm"));
        qtractorMidiSysexForm->resize(480, 320);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractorTracks.png"));
        qtractorMidiSysexForm->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(qtractorMidiSysexForm);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SysexListView = new QTreeWidget(qtractorMidiSysexForm);
        SysexListView->setObjectName(QString::fromUtf8("SysexListView"));
        SysexListView->setRootIsDecorated(false);
        SysexListView->setUniformRowHeights(true);
        SysexListView->setItemsExpandable(false);
        SysexListView->setAllColumnsShowFocus(true);

        gridLayout->addWidget(SysexListView, 0, 0, 5, 4);

        ImportButton = new QPushButton(qtractorMidiSysexForm);
        ImportButton->setObjectName(QString::fromUtf8("ImportButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formOpen.png"));
        ImportButton->setIcon(icon1);

        gridLayout->addWidget(ImportButton, 0, 4, 1, 1);

        ExportButton = new QPushButton(qtractorMidiSysexForm);
        ExportButton->setObjectName(QString::fromUtf8("ExportButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formSave.png"));
        ExportButton->setIcon(icon2);

        gridLayout->addWidget(ExportButton, 1, 4, 1, 1);

        spacerItem = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 4, 1, 1);

        MoveUpButton = new QPushButton(qtractorMidiSysexForm);
        MoveUpButton->setObjectName(QString::fromUtf8("MoveUpButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formMoveUp.png"));
        MoveUpButton->setIcon(icon3);

        gridLayout->addWidget(MoveUpButton, 3, 4, 1, 1);

        MoveDownButton = new QPushButton(qtractorMidiSysexForm);
        MoveDownButton->setObjectName(QString::fromUtf8("MoveDownButton"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formMoveDown.png"));
        MoveDownButton->setIcon(icon4);

        gridLayout->addWidget(MoveDownButton, 4, 4, 1, 1);

        OpenButton = new QToolButton(qtractorMidiSysexForm);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));
        OpenButton->setFocusPolicy(Qt::TabFocus);
        OpenButton->setIcon(icon1);

        gridLayout->addWidget(OpenButton, 5, 0, 1, 1);

        NameComboBox = new QComboBox(qtractorMidiSysexForm);
        NameComboBox->setObjectName(QString::fromUtf8("NameComboBox"));
        NameComboBox->setMinimumSize(QSize(320, 0));
        NameComboBox->setEditable(true);

        gridLayout->addWidget(NameComboBox, 5, 1, 1, 1);

        SaveButton = new QToolButton(qtractorMidiSysexForm);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setFocusPolicy(Qt::TabFocus);
        SaveButton->setIcon(icon2);

        gridLayout->addWidget(SaveButton, 5, 2, 1, 1);

        DeleteButton = new QToolButton(qtractorMidiSysexForm);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        DeleteButton->setIcon(icon5);

        gridLayout->addWidget(DeleteButton, 5, 3, 1, 1);

        AddButton = new QPushButton(qtractorMidiSysexForm);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/formAdd.png"));
        AddButton->setIcon(icon6);

        gridLayout->addWidget(AddButton, 5, 4, 1, 1);

        SysexTextEdit = new QTextEdit(qtractorMidiSysexForm);
        SysexTextEdit->setObjectName(QString::fromUtf8("SysexTextEdit"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Monospace")});
        SysexTextEdit->setFont(font);

        gridLayout->addWidget(SysexTextEdit, 6, 0, 3, 4);

        UpdateButton = new QPushButton(qtractorMidiSysexForm);
        UpdateButton->setObjectName(QString::fromUtf8("UpdateButton"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/formEdit.png"));
        UpdateButton->setIcon(icon7);

        gridLayout->addWidget(UpdateButton, 6, 4, 1, 1);

        RemoveButton = new QPushButton(qtractorMidiSysexForm);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));
        RemoveButton->setIcon(icon5);

        gridLayout->addWidget(RemoveButton, 7, 4, 1, 1);

        spacerItem1 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 8, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        DialogButtonBox = new QDialogButtonBox(qtractorMidiSysexForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(DialogButtonBox);

        QWidget::setTabOrder(SysexListView, ImportButton);
        QWidget::setTabOrder(ImportButton, ExportButton);
        QWidget::setTabOrder(ExportButton, MoveUpButton);
        QWidget::setTabOrder(MoveUpButton, MoveDownButton);
        QWidget::setTabOrder(MoveDownButton, OpenButton);
        QWidget::setTabOrder(OpenButton, NameComboBox);
        QWidget::setTabOrder(NameComboBox, SaveButton);
        QWidget::setTabOrder(SaveButton, DeleteButton);
        QWidget::setTabOrder(DeleteButton, SysexTextEdit);
        QWidget::setTabOrder(SysexTextEdit, AddButton);
        QWidget::setTabOrder(AddButton, UpdateButton);
        QWidget::setTabOrder(UpdateButton, RemoveButton);
        QWidget::setTabOrder(RemoveButton, DialogButtonBox);

        retranslateUi(qtractorMidiSysexForm);

        QMetaObject::connectSlotsByName(qtractorMidiSysexForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorMidiSysexForm)
    {
        qtractorMidiSysexForm->setWindowTitle(QCoreApplication::translate("qtractorMidiSysexForm", "MIDI SysEx", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = SysexListView->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("qtractorMidiSysexForm", "Data (hex)", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorMidiSysexForm", "Size", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorMidiSysexForm", "Name", nullptr));
#if QT_CONFIG(tooltip)
        ImportButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Import from SysEx file", nullptr));
#endif // QT_CONFIG(tooltip)
        ImportButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "&Import...", nullptr));
#if QT_CONFIG(tooltip)
        ExportButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Export to SysEx file", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "E&xport...", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Move SysEx item up on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Move SysEx item down on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "&Down", nullptr));
#if QT_CONFIG(tooltip)
        OpenButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Open SysEx", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        NameComboBox->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Sysex name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SaveButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Save SysEx", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DeleteButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Delete SysEx", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AddButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Create SysEx item", nullptr));
#endif // QT_CONFIG(tooltip)
        AddButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        UpdateButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Update SysEx item", nullptr));
#endif // QT_CONFIG(tooltip)
        UpdateButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "Upda&te", nullptr));
#if QT_CONFIG(tooltip)
        RemoveButton->setToolTip(QCoreApplication::translate("qtractorMidiSysexForm", "Remove SysEx item", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveButton->setText(QCoreApplication::translate("qtractorMidiSysexForm", "&Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorMidiSysexForm: public Ui_qtractorMidiSysexForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMIDISYSEXFORM_H
