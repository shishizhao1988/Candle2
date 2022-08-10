/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/frmmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmMain_t {
    QByteArrayData data[138];
    char stringdata0[3041];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmMain_t qt_meta_stringdata_frmMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "frmMain"
QT_MOC_LITERAL(1, 8, 10), // "GetButtons"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "uID"
QT_MOC_LITERAL(4, 24, 21), // "QList<XboxOneButtons>"
QT_MOC_LITERAL(5, 46, 14), // "PressedButtons"
QT_MOC_LITERAL(6, 61, 17), // "GetLeftThumbstick"
QT_MOC_LITERAL(7, 79, 1), // "x"
QT_MOC_LITERAL(8, 81, 1), // "y"
QT_MOC_LITERAL(9, 83, 18), // "GetRightThumbstick"
QT_MOC_LITERAL(10, 102, 14), // "GetLeftTrigger"
QT_MOC_LITERAL(11, 117, 4), // "byte"
QT_MOC_LITERAL(12, 122, 5), // "Value"
QT_MOC_LITERAL(13, 128, 15), // "GetRightTrigger"
QT_MOC_LITERAL(14, 144, 34), // "updateHeightMapInterpolationD..."
QT_MOC_LITERAL(15, 179, 5), // "reset"
QT_MOC_LITERAL(16, 185, 22), // "placeVisualizerButtons"
QT_MOC_LITERAL(17, 208, 13), // "onProcessData"
QT_MOC_LITERAL(18, 222, 12), // "onSendSerial"
QT_MOC_LITERAL(19, 235, 26), // "onTimerUpdateSpindleParser"
QT_MOC_LITERAL(20, 262, 18), // "onTimerStatusQuery"
QT_MOC_LITERAL(21, 281, 29), // "onVisualizatorRotationChanged"
QT_MOC_LITERAL(22, 311, 17), // "onScroolBarAction"
QT_MOC_LITERAL(23, 329, 6), // "action"
QT_MOC_LITERAL(24, 336, 10), // "onJogTimer"
QT_MOC_LITERAL(25, 347, 17), // "onTableInsertLine"
QT_MOC_LITERAL(26, 365, 18), // "onTableDeleteLines"
QT_MOC_LITERAL(27, 384, 24), // "onActRecentFileTriggered"
QT_MOC_LITERAL(28, 409, 25), // "onCboCommandReturnPressed"
QT_MOC_LITERAL(29, 435, 21), // "onTableCurrentChanged"
QT_MOC_LITERAL(30, 457, 11), // "QModelIndex"
QT_MOC_LITERAL(31, 469, 4), // "idx1"
QT_MOC_LITERAL(32, 474, 4), // "idx2"
QT_MOC_LITERAL(33, 479, 16), // "onConsoleResized"
QT_MOC_LITERAL(34, 496, 4), // "size"
QT_MOC_LITERAL(35, 501, 19), // "onPanelsSizeChanged"
QT_MOC_LITERAL(36, 521, 16), // "onCmdUserClicked"
QT_MOC_LITERAL(37, 538, 7), // "checked"
QT_MOC_LITERAL(38, 546, 19), // "onOverridingToggled"
QT_MOC_LITERAL(39, 566, 26), // "onActSendFromLineTriggered"
QT_MOC_LITERAL(40, 593, 24), // "on_actFileExit_triggered"
QT_MOC_LITERAL(41, 618, 22), // "on_cmdFileOpen_clicked"
QT_MOC_LITERAL(42, 641, 17), // "on_cmdFit_clicked"
QT_MOC_LITERAL(43, 659, 22), // "on_cmdFileSend_clicked"
QT_MOC_LITERAL(44, 682, 18), // "onTableCellChanged"
QT_MOC_LITERAL(45, 701, 2), // "i1"
QT_MOC_LITERAL(46, 704, 2), // "i2"
QT_MOC_LITERAL(47, 707, 31), // "on_actServiceSettings_triggered"
QT_MOC_LITERAL(48, 739, 24), // "on_actFileOpen_triggered"
QT_MOC_LITERAL(49, 764, 25), // "on_cmdCommandSend_clicked"
QT_MOC_LITERAL(50, 790, 18), // "on_cmdHome_clicked"
QT_MOC_LITERAL(51, 809, 19), // "on_cmdTouch_clicked"
QT_MOC_LITERAL(52, 829, 19), // "on_cmdZeroX_clicked"
QT_MOC_LITERAL(53, 849, 19), // "on_cmdZeroY_clicked"
QT_MOC_LITERAL(54, 869, 19), // "on_cmdZeroZ_clicked"
QT_MOC_LITERAL(55, 889, 27), // "on_cmdRestoreOrigin_clicked"
QT_MOC_LITERAL(56, 917, 19), // "on_cmdReset_clicked"
QT_MOC_LITERAL(57, 937, 20), // "on_cmdUnlock_clicked"
QT_MOC_LITERAL(58, 958, 26), // "on_cmdSafePosition_clicked"
QT_MOC_LITERAL(59, 985, 21), // "on_cmdSpindle_toggled"
QT_MOC_LITERAL(60, 1007, 22), // "on_chkTestMode_clicked"
QT_MOC_LITERAL(61, 1030, 23), // "on_cmdFilePause_clicked"
QT_MOC_LITERAL(62, 1054, 23), // "on_cmdFileReset_clicked"
QT_MOC_LITERAL(63, 1078, 23), // "on_actFileNew_triggered"
QT_MOC_LITERAL(64, 1102, 26), // "on_cmdClearConsole_clicked"
QT_MOC_LITERAL(65, 1129, 26), // "on_actFileSaveAs_triggered"
QT_MOC_LITERAL(66, 1156, 24), // "on_actFileSave_triggered"
QT_MOC_LITERAL(67, 1181, 37), // "on_actFileSaveTransformedAs_t..."
QT_MOC_LITERAL(68, 1219, 17), // "on_cmdTop_clicked"
QT_MOC_LITERAL(69, 1237, 19), // "on_cmdFront_clicked"
QT_MOC_LITERAL(70, 1257, 18), // "on_cmdLeft_clicked"
QT_MOC_LITERAL(71, 1276, 23), // "on_cmdIsometric_clicked"
QT_MOC_LITERAL(72, 1300, 21), // "on_actAbout_triggered"
QT_MOC_LITERAL(73, 1322, 24), // "on_grpOverriding_toggled"
QT_MOC_LITERAL(74, 1347, 21), // "on_grpSpindle_toggled"
QT_MOC_LITERAL(75, 1369, 17), // "on_grpJog_toggled"
QT_MOC_LITERAL(76, 1387, 26), // "on_grpUserCommands_toggled"
QT_MOC_LITERAL(77, 1414, 29), // "on_chkKeyboardControl_toggled"
QT_MOC_LITERAL(78, 1444, 40), // "on_tblProgram_customContextMe..."
QT_MOC_LITERAL(79, 1485, 3), // "pos"
QT_MOC_LITERAL(80, 1489, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(81, 1515, 5), // "index"
QT_MOC_LITERAL(82, 1521, 27), // "on_actRecentClear_triggered"
QT_MOC_LITERAL(83, 1549, 23), // "on_grpHeightMap_toggled"
QT_MOC_LITERAL(84, 1573, 4), // "arg1"
QT_MOC_LITERAL(85, 1578, 33), // "on_chkHeightMapBorderShow_tog..."
QT_MOC_LITERAL(86, 1612, 35), // "on_txtHeightMapBorderX_valueC..."
QT_MOC_LITERAL(87, 1648, 39), // "on_txtHeightMapBorderWidth_va..."
QT_MOC_LITERAL(88, 1688, 35), // "on_txtHeightMapBorderY_valueC..."
QT_MOC_LITERAL(89, 1724, 40), // "on_txtHeightMapBorderHeight_v..."
QT_MOC_LITERAL(90, 1765, 31), // "on_chkHeightMapGridShow_toggled"
QT_MOC_LITERAL(91, 1797, 33), // "on_txtHeightMapGridX_valueCha..."
QT_MOC_LITERAL(92, 1831, 33), // "on_txtHeightMapGridY_valueCha..."
QT_MOC_LITERAL(93, 1865, 39), // "on_txtHeightMapGridZBottom_va..."
QT_MOC_LITERAL(94, 1905, 36), // "on_txtHeightMapGridZTop_value..."
QT_MOC_LITERAL(95, 1942, 27), // "on_cmdHeightMapMode_toggled"
QT_MOC_LITERAL(96, 1970, 40), // "on_chkHeightMapInterpolationS..."
QT_MOC_LITERAL(97, 2011, 27), // "on_cmdHeightMapLoad_clicked"
QT_MOC_LITERAL(98, 2039, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(99, 2086, 46), // "on_txtHeightMapInterpolationS..."
QT_MOC_LITERAL(100, 2133, 26), // "on_chkHeightMapUse_clicked"
QT_MOC_LITERAL(101, 2160, 29), // "on_cmdHeightMapCreate_clicked"
QT_MOC_LITERAL(102, 2190, 33), // "on_cmdHeightMapBorderAuto_cli..."
QT_MOC_LITERAL(103, 2224, 23), // "on_cmdFileAbort_clicked"
QT_MOC_LITERAL(104, 2248, 21), // "on_cmdSpindle_clicked"
QT_MOC_LITERAL(105, 2270, 19), // "on_cmdYPlus_pressed"
QT_MOC_LITERAL(106, 2290, 20), // "on_cmdYPlus_released"
QT_MOC_LITERAL(107, 2311, 20), // "on_cmdYMinus_pressed"
QT_MOC_LITERAL(108, 2332, 21), // "on_cmdYMinus_released"
QT_MOC_LITERAL(109, 2354, 19), // "on_cmdXPlus_pressed"
QT_MOC_LITERAL(110, 2374, 20), // "on_cmdXPlus_released"
QT_MOC_LITERAL(111, 2395, 20), // "on_cmdXMinus_pressed"
QT_MOC_LITERAL(112, 2416, 21), // "on_cmdXMinus_released"
QT_MOC_LITERAL(113, 2438, 19), // "on_cmdZPlus_pressed"
QT_MOC_LITERAL(114, 2458, 20), // "on_cmdZPlus_released"
QT_MOC_LITERAL(115, 2479, 20), // "on_cmdZMinus_pressed"
QT_MOC_LITERAL(116, 2500, 21), // "on_cmdZMinus_released"
QT_MOC_LITERAL(117, 2522, 18), // "on_cmdStop_clicked"
QT_MOC_LITERAL(118, 2541, 23), // "on_cmdSpindle_triggered"
QT_MOC_LITERAL(119, 2565, 8), // "QAction*"
QT_MOC_LITERAL(120, 2574, 20), // "on_btnReload_clicked"
QT_MOC_LITERAL(121, 2595, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(122, 2617, 36), // "on_comboInterface_currentText..."
QT_MOC_LITERAL(123, 2654, 29), // "on_actionHard_Reset_triggered"
QT_MOC_LITERAL(124, 2684, 35), // "on_actionSet_TLS_Position_tri..."
QT_MOC_LITERAL(125, 2720, 34), // "on_actionDisable_Stepper_trig..."
QT_MOC_LITERAL(126, 2755, 23), // "on_btnHandwheel_clicked"
QT_MOC_LITERAL(127, 2779, 22), // "on_btnSetCoord_clicked"
QT_MOC_LITERAL(128, 2802, 23), // "on_btnSaveCoord_clicked"
QT_MOC_LITERAL(129, 2826, 19), // "on_cmdAPlus_pressed"
QT_MOC_LITERAL(130, 2846, 20), // "on_cmdAPlus_released"
QT_MOC_LITERAL(131, 2867, 20), // "on_cmdAMinus_pressed"
QT_MOC_LITERAL(132, 2888, 21), // "on_cmdAMinus_released"
QT_MOC_LITERAL(133, 2910, 31), // "on_chkGrblWPosMPos_stateChanged"
QT_MOC_LITERAL(134, 2942, 19), // "on_cmdZeroA_clicked"
QT_MOC_LITERAL(135, 2962, 33), // "on_leGroundHeight_editingFini..."
QT_MOC_LITERAL(136, 2996, 20), // "on_cmdPumpM7_clicked"
QT_MOC_LITERAL(137, 3017, 23) // "on_cmdPumpOffM9_clicked"

    },
    "frmMain\0GetButtons\0\0uID\0QList<XboxOneButtons>\0"
    "PressedButtons\0GetLeftThumbstick\0x\0y\0"
    "GetRightThumbstick\0GetLeftTrigger\0"
    "byte\0Value\0GetRightTrigger\0"
    "updateHeightMapInterpolationDrawer\0"
    "reset\0placeVisualizerButtons\0onProcessData\0"
    "onSendSerial\0onTimerUpdateSpindleParser\0"
    "onTimerStatusQuery\0onVisualizatorRotationChanged\0"
    "onScroolBarAction\0action\0onJogTimer\0"
    "onTableInsertLine\0onTableDeleteLines\0"
    "onActRecentFileTriggered\0"
    "onCboCommandReturnPressed\0"
    "onTableCurrentChanged\0QModelIndex\0"
    "idx1\0idx2\0onConsoleResized\0size\0"
    "onPanelsSizeChanged\0onCmdUserClicked\0"
    "checked\0onOverridingToggled\0"
    "onActSendFromLineTriggered\0"
    "on_actFileExit_triggered\0"
    "on_cmdFileOpen_clicked\0on_cmdFit_clicked\0"
    "on_cmdFileSend_clicked\0onTableCellChanged\0"
    "i1\0i2\0on_actServiceSettings_triggered\0"
    "on_actFileOpen_triggered\0"
    "on_cmdCommandSend_clicked\0on_cmdHome_clicked\0"
    "on_cmdTouch_clicked\0on_cmdZeroX_clicked\0"
    "on_cmdZeroY_clicked\0on_cmdZeroZ_clicked\0"
    "on_cmdRestoreOrigin_clicked\0"
    "on_cmdReset_clicked\0on_cmdUnlock_clicked\0"
    "on_cmdSafePosition_clicked\0"
    "on_cmdSpindle_toggled\0on_chkTestMode_clicked\0"
    "on_cmdFilePause_clicked\0on_cmdFileReset_clicked\0"
    "on_actFileNew_triggered\0"
    "on_cmdClearConsole_clicked\0"
    "on_actFileSaveAs_triggered\0"
    "on_actFileSave_triggered\0"
    "on_actFileSaveTransformedAs_triggered\0"
    "on_cmdTop_clicked\0on_cmdFront_clicked\0"
    "on_cmdLeft_clicked\0on_cmdIsometric_clicked\0"
    "on_actAbout_triggered\0on_grpOverriding_toggled\0"
    "on_grpSpindle_toggled\0on_grpJog_toggled\0"
    "on_grpUserCommands_toggled\0"
    "on_chkKeyboardControl_toggled\0"
    "on_tblProgram_customContextMenuRequested\0"
    "pos\0on_splitter_splitterMoved\0index\0"
    "on_actRecentClear_triggered\0"
    "on_grpHeightMap_toggled\0arg1\0"
    "on_chkHeightMapBorderShow_toggled\0"
    "on_txtHeightMapBorderX_valueChanged\0"
    "on_txtHeightMapBorderWidth_valueChanged\0"
    "on_txtHeightMapBorderY_valueChanged\0"
    "on_txtHeightMapBorderHeight_valueChanged\0"
    "on_chkHeightMapGridShow_toggled\0"
    "on_txtHeightMapGridX_valueChanged\0"
    "on_txtHeightMapGridY_valueChanged\0"
    "on_txtHeightMapGridZBottom_valueChanged\0"
    "on_txtHeightMapGridZTop_valueChanged\0"
    "on_cmdHeightMapMode_toggled\0"
    "on_chkHeightMapInterpolationShow_toggled\0"
    "on_cmdHeightMapLoad_clicked\0"
    "on_txtHeightMapInterpolationStepX_valueChanged\0"
    "on_txtHeightMapInterpolationStepY_valueChanged\0"
    "on_chkHeightMapUse_clicked\0"
    "on_cmdHeightMapCreate_clicked\0"
    "on_cmdHeightMapBorderAuto_clicked\0"
    "on_cmdFileAbort_clicked\0on_cmdSpindle_clicked\0"
    "on_cmdYPlus_pressed\0on_cmdYPlus_released\0"
    "on_cmdYMinus_pressed\0on_cmdYMinus_released\0"
    "on_cmdXPlus_pressed\0on_cmdXPlus_released\0"
    "on_cmdXMinus_pressed\0on_cmdXMinus_released\0"
    "on_cmdZPlus_pressed\0on_cmdZPlus_released\0"
    "on_cmdZMinus_pressed\0on_cmdZMinus_released\0"
    "on_cmdStop_clicked\0on_cmdSpindle_triggered\0"
    "QAction*\0on_btnReload_clicked\0"
    "on_btnConnect_clicked\0"
    "on_comboInterface_currentTextChanged\0"
    "on_actionHard_Reset_triggered\0"
    "on_actionSet_TLS_Position_triggered\0"
    "on_actionDisable_Stepper_triggered\0"
    "on_btnHandwheel_clicked\0on_btnSetCoord_clicked\0"
    "on_btnSaveCoord_clicked\0on_cmdAPlus_pressed\0"
    "on_cmdAPlus_released\0on_cmdAMinus_pressed\0"
    "on_cmdAMinus_released\0"
    "on_chkGrblWPosMPos_stateChanged\0"
    "on_cmdZeroA_clicked\0"
    "on_leGroundHeight_editingFinished\0"
    "on_cmdPumpM7_clicked\0on_cmdPumpOffM9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     117,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  599,    2, 0x08 /* Private */,
       6,    3,  604,    2, 0x08 /* Private */,
       9,    3,  611,    2, 0x08 /* Private */,
      10,    2,  618,    2, 0x08 /* Private */,
      13,    2,  623,    2, 0x08 /* Private */,
      14,    1,  628,    2, 0x08 /* Private */,
      14,    0,  631,    2, 0x28 /* Private | MethodCloned */,
      16,    0,  632,    2, 0x08 /* Private */,
      17,    0,  633,    2, 0x08 /* Private */,
      18,    0,  634,    2, 0x08 /* Private */,
      19,    0,  635,    2, 0x08 /* Private */,
      20,    0,  636,    2, 0x08 /* Private */,
      21,    0,  637,    2, 0x08 /* Private */,
      22,    1,  638,    2, 0x08 /* Private */,
      24,    0,  641,    2, 0x08 /* Private */,
      25,    0,  642,    2, 0x08 /* Private */,
      26,    0,  643,    2, 0x08 /* Private */,
      27,    0,  644,    2, 0x08 /* Private */,
      28,    0,  645,    2, 0x08 /* Private */,
      29,    2,  646,    2, 0x08 /* Private */,
      33,    1,  651,    2, 0x08 /* Private */,
      35,    1,  654,    2, 0x08 /* Private */,
      36,    1,  657,    2, 0x08 /* Private */,
      38,    1,  660,    2, 0x08 /* Private */,
      39,    0,  663,    2, 0x08 /* Private */,
      40,    0,  664,    2, 0x08 /* Private */,
      41,    0,  665,    2, 0x08 /* Private */,
      42,    0,  666,    2, 0x08 /* Private */,
      43,    0,  667,    2, 0x08 /* Private */,
      44,    2,  668,    2, 0x08 /* Private */,
      47,    0,  673,    2, 0x08 /* Private */,
      48,    0,  674,    2, 0x08 /* Private */,
      49,    0,  675,    2, 0x08 /* Private */,
      50,    0,  676,    2, 0x08 /* Private */,
      51,    0,  677,    2, 0x08 /* Private */,
      52,    0,  678,    2, 0x08 /* Private */,
      53,    0,  679,    2, 0x08 /* Private */,
      54,    0,  680,    2, 0x08 /* Private */,
      55,    0,  681,    2, 0x08 /* Private */,
      56,    0,  682,    2, 0x08 /* Private */,
      57,    0,  683,    2, 0x08 /* Private */,
      58,    0,  684,    2, 0x08 /* Private */,
      59,    1,  685,    2, 0x08 /* Private */,
      60,    1,  688,    2, 0x08 /* Private */,
      61,    1,  691,    2, 0x08 /* Private */,
      62,    0,  694,    2, 0x08 /* Private */,
      63,    0,  695,    2, 0x08 /* Private */,
      64,    0,  696,    2, 0x08 /* Private */,
      65,    0,  697,    2, 0x08 /* Private */,
      66,    0,  698,    2, 0x08 /* Private */,
      67,    0,  699,    2, 0x08 /* Private */,
      68,    0,  700,    2, 0x08 /* Private */,
      69,    0,  701,    2, 0x08 /* Private */,
      70,    0,  702,    2, 0x08 /* Private */,
      71,    0,  703,    2, 0x08 /* Private */,
      72,    0,  704,    2, 0x08 /* Private */,
      73,    1,  705,    2, 0x08 /* Private */,
      74,    1,  708,    2, 0x08 /* Private */,
      75,    1,  711,    2, 0x08 /* Private */,
      76,    1,  714,    2, 0x08 /* Private */,
      77,    1,  717,    2, 0x08 /* Private */,
      78,    1,  720,    2, 0x08 /* Private */,
      80,    2,  723,    2, 0x08 /* Private */,
      82,    0,  728,    2, 0x08 /* Private */,
      83,    1,  729,    2, 0x08 /* Private */,
      85,    1,  732,    2, 0x08 /* Private */,
      86,    1,  735,    2, 0x08 /* Private */,
      87,    1,  738,    2, 0x08 /* Private */,
      88,    1,  741,    2, 0x08 /* Private */,
      89,    1,  744,    2, 0x08 /* Private */,
      90,    1,  747,    2, 0x08 /* Private */,
      91,    1,  750,    2, 0x08 /* Private */,
      92,    1,  753,    2, 0x08 /* Private */,
      93,    1,  756,    2, 0x08 /* Private */,
      94,    1,  759,    2, 0x08 /* Private */,
      95,    1,  762,    2, 0x08 /* Private */,
      96,    1,  765,    2, 0x08 /* Private */,
      97,    0,  768,    2, 0x08 /* Private */,
      98,    1,  769,    2, 0x08 /* Private */,
      99,    1,  772,    2, 0x08 /* Private */,
     100,    1,  775,    2, 0x08 /* Private */,
     101,    0,  778,    2, 0x08 /* Private */,
     102,    0,  779,    2, 0x08 /* Private */,
     103,    0,  780,    2, 0x08 /* Private */,
     104,    1,  781,    2, 0x08 /* Private */,
     105,    0,  784,    2, 0x08 /* Private */,
     106,    0,  785,    2, 0x08 /* Private */,
     107,    0,  786,    2, 0x08 /* Private */,
     108,    0,  787,    2, 0x08 /* Private */,
     109,    0,  788,    2, 0x08 /* Private */,
     110,    0,  789,    2, 0x08 /* Private */,
     111,    0,  790,    2, 0x08 /* Private */,
     112,    0,  791,    2, 0x08 /* Private */,
     113,    0,  792,    2, 0x08 /* Private */,
     114,    0,  793,    2, 0x08 /* Private */,
     115,    0,  794,    2, 0x08 /* Private */,
     116,    0,  795,    2, 0x08 /* Private */,
     117,    0,  796,    2, 0x08 /* Private */,
     118,    1,  797,    2, 0x08 /* Private */,
     120,    0,  800,    2, 0x08 /* Private */,
     121,    0,  801,    2, 0x08 /* Private */,
     122,    1,  802,    2, 0x08 /* Private */,
     123,    0,  805,    2, 0x08 /* Private */,
     124,    0,  806,    2, 0x08 /* Private */,
     125,    0,  807,    2, 0x08 /* Private */,
     126,    0,  808,    2, 0x08 /* Private */,
     127,    0,  809,    2, 0x08 /* Private */,
     128,    0,  810,    2, 0x08 /* Private */,
     129,    0,  811,    2, 0x08 /* Private */,
     130,    0,  812,    2, 0x08 /* Private */,
     131,    0,  813,    2, 0x08 /* Private */,
     132,    0,  814,    2, 0x08 /* Private */,
     133,    1,  815,    2, 0x08 /* Private */,
     134,    0,  818,    2, 0x08 /* Private */,
     135,    0,  819,    2, 0x08 /* Private */,
     136,    1,  820,    2, 0x08 /* Private */,
     137,    1,  823,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Short, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Short, QMetaType::Double, QMetaType::Double,    3,    7,    8,
    QMetaType::Void, QMetaType::Short, QMetaType::Double, QMetaType::Double,    3,    7,    8,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 11,    3,   12,
    QMetaType::Void, QMetaType::Short, 0x80000000 | 11,    3,   12,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   31,   32,
    QMetaType::Void, QMetaType::QSize,   34,
    QMetaType::Void, QMetaType::QSize,   34,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 30,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::QPoint,   79,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   79,   81,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   84,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Double,   84,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 119,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,

       0        // eod
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GetButtons((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< QList<XboxOneButtons>(*)>(_a[2]))); break;
        case 1: _t->GetLeftThumbstick((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->GetRightThumbstick((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->GetLeftTrigger((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< byte(*)>(_a[2]))); break;
        case 4: _t->GetRightTrigger((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< byte(*)>(_a[2]))); break;
        case 5: _t->updateHeightMapInterpolationDrawer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateHeightMapInterpolationDrawer(); break;
        case 7: _t->placeVisualizerButtons(); break;
        case 8: _t->onProcessData(); break;
        case 9: _t->onSendSerial(); break;
        case 10: _t->onTimerUpdateSpindleParser(); break;
        case 11: _t->onTimerStatusQuery(); break;
        case 12: _t->onVisualizatorRotationChanged(); break;
        case 13: _t->onScroolBarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onJogTimer(); break;
        case 15: _t->onTableInsertLine(); break;
        case 16: _t->onTableDeleteLines(); break;
        case 17: _t->onActRecentFileTriggered(); break;
        case 18: _t->onCboCommandReturnPressed(); break;
        case 19: _t->onTableCurrentChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 20: _t->onConsoleResized((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 21: _t->onPanelsSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 22: _t->onCmdUserClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->onOverridingToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->onActSendFromLineTriggered(); break;
        case 25: _t->on_actFileExit_triggered(); break;
        case 26: _t->on_cmdFileOpen_clicked(); break;
        case 27: _t->on_cmdFit_clicked(); break;
        case 28: _t->on_cmdFileSend_clicked(); break;
        case 29: _t->onTableCellChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 30: _t->on_actServiceSettings_triggered(); break;
        case 31: _t->on_actFileOpen_triggered(); break;
        case 32: _t->on_cmdCommandSend_clicked(); break;
        case 33: _t->on_cmdHome_clicked(); break;
        case 34: _t->on_cmdTouch_clicked(); break;
        case 35: _t->on_cmdZeroX_clicked(); break;
        case 36: _t->on_cmdZeroY_clicked(); break;
        case 37: _t->on_cmdZeroZ_clicked(); break;
        case 38: _t->on_cmdRestoreOrigin_clicked(); break;
        case 39: _t->on_cmdReset_clicked(); break;
        case 40: _t->on_cmdUnlock_clicked(); break;
        case 41: _t->on_cmdSafePosition_clicked(); break;
        case 42: _t->on_cmdSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_chkTestMode_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_cmdFilePause_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_cmdFileReset_clicked(); break;
        case 46: _t->on_actFileNew_triggered(); break;
        case 47: _t->on_cmdClearConsole_clicked(); break;
        case 48: _t->on_actFileSaveAs_triggered(); break;
        case 49: _t->on_actFileSave_triggered(); break;
        case 50: _t->on_actFileSaveTransformedAs_triggered(); break;
        case 51: _t->on_cmdTop_clicked(); break;
        case 52: _t->on_cmdFront_clicked(); break;
        case 53: _t->on_cmdLeft_clicked(); break;
        case 54: _t->on_cmdIsometric_clicked(); break;
        case 55: _t->on_actAbout_triggered(); break;
        case 56: _t->on_grpOverriding_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->on_grpSpindle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->on_grpJog_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_grpUserCommands_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->on_chkKeyboardControl_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->on_tblProgram_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 62: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: _t->on_actRecentClear_triggered(); break;
        case 64: _t->on_grpHeightMap_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->on_chkHeightMapBorderShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->on_txtHeightMapBorderX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 67: _t->on_txtHeightMapBorderWidth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 68: _t->on_txtHeightMapBorderY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 69: _t->on_txtHeightMapBorderHeight_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 70: _t->on_chkHeightMapGridShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: _t->on_txtHeightMapGridX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 72: _t->on_txtHeightMapGridY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 73: _t->on_txtHeightMapGridZBottom_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 74: _t->on_txtHeightMapGridZTop_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 75: _t->on_cmdHeightMapMode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->on_chkHeightMapInterpolationShow_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->on_cmdHeightMapLoad_clicked(); break;
        case 78: _t->on_txtHeightMapInterpolationStepX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 79: _t->on_txtHeightMapInterpolationStepY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 80: _t->on_chkHeightMapUse_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->on_cmdHeightMapCreate_clicked(); break;
        case 82: _t->on_cmdHeightMapBorderAuto_clicked(); break;
        case 83: _t->on_cmdFileAbort_clicked(); break;
        case 84: _t->on_cmdSpindle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->on_cmdYPlus_pressed(); break;
        case 86: _t->on_cmdYPlus_released(); break;
        case 87: _t->on_cmdYMinus_pressed(); break;
        case 88: _t->on_cmdYMinus_released(); break;
        case 89: _t->on_cmdXPlus_pressed(); break;
        case 90: _t->on_cmdXPlus_released(); break;
        case 91: _t->on_cmdXMinus_pressed(); break;
        case 92: _t->on_cmdXMinus_released(); break;
        case 93: _t->on_cmdZPlus_pressed(); break;
        case 94: _t->on_cmdZPlus_released(); break;
        case 95: _t->on_cmdZMinus_pressed(); break;
        case 96: _t->on_cmdZMinus_released(); break;
        case 97: _t->on_cmdStop_clicked(); break;
        case 98: _t->on_cmdSpindle_triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 99: _t->on_btnReload_clicked(); break;
        case 100: _t->on_btnConnect_clicked(); break;
        case 101: _t->on_comboInterface_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 102: _t->on_actionHard_Reset_triggered(); break;
        case 103: _t->on_actionSet_TLS_Position_triggered(); break;
        case 104: _t->on_actionDisable_Stepper_triggered(); break;
        case 105: _t->on_btnHandwheel_clicked(); break;
        case 106: _t->on_btnSetCoord_clicked(); break;
        case 107: _t->on_btnSaveCoord_clicked(); break;
        case 108: _t->on_cmdAPlus_pressed(); break;
        case 109: _t->on_cmdAPlus_released(); break;
        case 110: _t->on_cmdAMinus_pressed(); break;
        case 111: _t->on_cmdAMinus_released(); break;
        case 112: _t->on_chkGrblWPosMPos_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->on_cmdZeroA_clicked(); break;
        case 114: _t->on_leGroundHeight_editingFinished(); break;
        case 115: _t->on_cmdPumpM7_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->on_cmdPumpOffM9_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmMain::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_frmMain.data,
    qt_meta_data_frmMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
