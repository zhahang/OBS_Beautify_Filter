/********************************************************************************
** Form generated from reading UI file 'device-select-toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_2D_SELECT_2D_TOOLBAR_H
#define UI_DEVICE_2D_SELECT_2D_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceSelectToolbar
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *deviceLabel;
    QComboBox *device;
    QPushButton *activateButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *DeviceSelectToolbar)
    {
        if (DeviceSelectToolbar->objectName().isEmpty())
            DeviceSelectToolbar->setObjectName(QString::fromUtf8("DeviceSelectToolbar"));
        DeviceSelectToolbar->resize(665, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeviceSelectToolbar->sizePolicy().hasHeightForWidth());
        DeviceSelectToolbar->setSizePolicy(sizePolicy);
        DeviceSelectToolbar->setMinimumSize(QSize(0, 22));
        DeviceSelectToolbar->setMaximumSize(QSize(16777215, 22));
        DeviceSelectToolbar->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_2 = new QHBoxLayout(DeviceSelectToolbar);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        deviceLabel = new QLabel(DeviceSelectToolbar);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceLabel->sizePolicy().hasHeightForWidth());
        deviceLabel->setSizePolicy(sizePolicy1);
        deviceLabel->setMinimumSize(QSize(0, 22));
        deviceLabel->setMaximumSize(QSize(16777215, 22));
        deviceLabel->setText(QString::fromUtf8("Device"));

        horizontalLayout_2->addWidget(deviceLabel);

        device = new QComboBox(DeviceSelectToolbar);
        device->setObjectName(QString::fromUtf8("device"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(device->sizePolicy().hasHeightForWidth());
        device->setSizePolicy(sizePolicy2);
        device->setMinimumSize(QSize(0, 22));
        device->setMaximumSize(QSize(16777215, 22));
        device->setCurrentText(QString::fromUtf8(""));
        device->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_2->addWidget(device);

        activateButton = new QPushButton(DeviceSelectToolbar);
        activateButton->setObjectName(QString::fromUtf8("activateButton"));
        activateButton->setMinimumSize(QSize(0, 22));
        activateButton->setMaximumSize(QSize(16777215, 22));
        activateButton->setText(QString::fromUtf8("Activate"));

        horizontalLayout_2->addWidget(activateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

#if QT_CONFIG(shortcut)
        deviceLabel->setBuddy(device);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DeviceSelectToolbar);

        QMetaObject::connectSlotsByName(DeviceSelectToolbar);
    } // setupUi

    void retranslateUi(QWidget *DeviceSelectToolbar)
    {
        (void)DeviceSelectToolbar;
    } // retranslateUi

};

namespace Ui {
    class DeviceSelectToolbar: public Ui_DeviceSelectToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_2D_SELECT_2D_TOOLBAR_H
