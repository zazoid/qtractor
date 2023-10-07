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
** Form generated from reading UI file 'qtractorInstrumentForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORINSTRUMENTFORM_H
#define UI_QTRACTORINSTRUMENTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qtractorInstrumentForm
{
public:
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QTreeWidget *InstrumentsListView;
    QSplitter *splitter1;
    QTreeWidget *FilesListView;
    QTreeWidget *NamesListView;
    QVBoxLayout *vboxLayout;
    QPushButton *ImportPushButton;
    QPushButton *RemovePushButton;
    QPushButton *MoveUpPushButton;
    QPushButton *MoveDownPushButton;
    QSpacerItem *spacerItem;
    QPushButton *ReloadPushButton;
    QPushButton *ExportPushButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *qtractorInstrumentForm)
    {
        if (qtractorInstrumentForm->objectName().isEmpty())
            qtractorInstrumentForm->setObjectName(QString::fromUtf8("qtractorInstrumentForm"));
        qtractorInstrumentForm->resize(580, 340);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/itemInstrument.png"));
        qtractorInstrumentForm->setWindowIcon(icon);
        hboxLayout = new QHBoxLayout(qtractorInstrumentForm);
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(8, 8, 8, 8);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        splitter = new QSplitter(qtractorInstrumentForm);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        InstrumentsListView = new QTreeWidget(splitter);
        InstrumentsListView->setObjectName(QString::fromUtf8("InstrumentsListView"));
        InstrumentsListView->setMinimumSize(QSize(240, 0));
        InstrumentsListView->setSelectionMode(QAbstractItemView::NoSelection);
        InstrumentsListView->setRootIsDecorated(true);
        InstrumentsListView->setUniformRowHeights(true);
        InstrumentsListView->setAllColumnsShowFocus(true);
        splitter->addWidget(InstrumentsListView);
        splitter1 = new QSplitter(splitter);
        splitter1->setObjectName(QString::fromUtf8("splitter1"));
        splitter1->setOrientation(Qt::Vertical);
        FilesListView = new QTreeWidget(splitter1);
        FilesListView->setObjectName(QString::fromUtf8("FilesListView"));
        FilesListView->setMinimumSize(QSize(240, 0));
        FilesListView->setRootIsDecorated(false);
        FilesListView->setUniformRowHeights(true);
        FilesListView->setItemsExpandable(false);
        FilesListView->setAllColumnsShowFocus(true);
        splitter1->addWidget(FilesListView);
        NamesListView = new QTreeWidget(splitter1);
        NamesListView->setObjectName(QString::fromUtf8("NamesListView"));
        NamesListView->setMinimumSize(QSize(240, 0));
        NamesListView->setSelectionMode(QAbstractItemView::NoSelection);
        NamesListView->setRootIsDecorated(true);
        NamesListView->setUniformRowHeights(true);
        NamesListView->setAllColumnsShowFocus(true);
        splitter1->addWidget(NamesListView);
        splitter->addWidget(splitter1);

        hboxLayout->addWidget(splitter);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ImportPushButton = new QPushButton(qtractorInstrumentForm);
        ImportPushButton->setObjectName(QString::fromUtf8("ImportPushButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formOpen.png"));
        ImportPushButton->setIcon(icon1);

        vboxLayout->addWidget(ImportPushButton);

        RemovePushButton = new QPushButton(qtractorInstrumentForm);
        RemovePushButton->setObjectName(QString::fromUtf8("RemovePushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        RemovePushButton->setIcon(icon2);

        vboxLayout->addWidget(RemovePushButton);

        MoveUpPushButton = new QPushButton(qtractorInstrumentForm);
        MoveUpPushButton->setObjectName(QString::fromUtf8("MoveUpPushButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formMoveUp.png"));
        MoveUpPushButton->setIcon(icon3);

        vboxLayout->addWidget(MoveUpPushButton);

        MoveDownPushButton = new QPushButton(qtractorInstrumentForm);
        MoveDownPushButton->setObjectName(QString::fromUtf8("MoveDownPushButton"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formMoveDown.png"));
        MoveDownPushButton->setIcon(icon4);

        vboxLayout->addWidget(MoveDownPushButton);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        ReloadPushButton = new QPushButton(qtractorInstrumentForm);
        ReloadPushButton->setObjectName(QString::fromUtf8("ReloadPushButton"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formRefresh.png"));
        ReloadPushButton->setIcon(icon5);

        vboxLayout->addWidget(ReloadPushButton);

        ExportPushButton = new QPushButton(qtractorInstrumentForm);
        ExportPushButton->setObjectName(QString::fromUtf8("ExportPushButton"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/formSave.png"));
        ExportPushButton->setIcon(icon6);

        vboxLayout->addWidget(ExportPushButton);

        ClosePushButton = new QPushButton(qtractorInstrumentForm);
        ClosePushButton->setObjectName(QString::fromUtf8("ClosePushButton"));

        vboxLayout->addWidget(ClosePushButton);


        hboxLayout->addLayout(vboxLayout);

        QWidget::setTabOrder(InstrumentsListView, FilesListView);
        QWidget::setTabOrder(FilesListView, NamesListView);
        QWidget::setTabOrder(NamesListView, ImportPushButton);
        QWidget::setTabOrder(ImportPushButton, RemovePushButton);
        QWidget::setTabOrder(RemovePushButton, MoveUpPushButton);
        QWidget::setTabOrder(MoveUpPushButton, MoveDownPushButton);
        QWidget::setTabOrder(MoveDownPushButton, ReloadPushButton);
        QWidget::setTabOrder(ReloadPushButton, ExportPushButton);
        QWidget::setTabOrder(ExportPushButton, ClosePushButton);

        retranslateUi(qtractorInstrumentForm);

        QMetaObject::connectSlotsByName(qtractorInstrumentForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorInstrumentForm)
    {
        qtractorInstrumentForm->setWindowTitle(QCoreApplication::translate("qtractorInstrumentForm", "Instruments", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = InstrumentsListView->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorInstrumentForm", "Instruments", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = FilesListView->headerItem();
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("qtractorInstrumentForm", "Path", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("qtractorInstrumentForm", "Files", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = NamesListView->headerItem();
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("qtractorInstrumentForm", "Names", nullptr));
#if QT_CONFIG(tooltip)
        ImportPushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Import from instrument file", nullptr));
#endif // QT_CONFIG(tooltip)
        ImportPushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "&Import...", nullptr));
#if QT_CONFIG(tooltip)
        RemovePushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Remove instrument file", nullptr));
#endif // QT_CONFIG(tooltip)
        RemovePushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpPushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Move instrument file up on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpPushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownPushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Move instrument file down on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownPushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "&Down", nullptr));
#if QT_CONFIG(tooltip)
        ReloadPushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Reload all instrument files", nullptr));
#endif // QT_CONFIG(tooltip)
        ReloadPushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "Relo&ad", nullptr));
#if QT_CONFIG(tooltip)
        ExportPushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Export to instrument file", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportPushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "E&xport...", nullptr));
#if QT_CONFIG(tooltip)
        ClosePushButton->setToolTip(QCoreApplication::translate("qtractorInstrumentForm", "Close this dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        ClosePushButton->setText(QCoreApplication::translate("qtractorInstrumentForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorInstrumentForm: public Ui_qtractorInstrumentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORINSTRUMENTFORM_H
