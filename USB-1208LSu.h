/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2008. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  MEASURE                          1       /* callback function: util_HidePanelCallback */
#define  MEASURE_LABEL                    2       /* callback function: usb1208ls_MeasureControlCallback */
#define  MEASURE_COEFF                    3       /* callback function: usb1208ls_MeasureControlCallback */
#define  MEASURE_RANGE                    4       /* callback function: usb1208ls_MeasureControlCallback */
#define  MEASURE_NOTE                     5       /* callback function: AcqDataNoteCallback */
#define  MEASURE_ACQ                      6       /* callback function: usb1208ls_MeasureControlCallback */

#define  PANEL                            2
#define  PANEL_RANGE                      2       /* callback function: das6036_ControlCallback */

#define  USB1208LS                        3       /* callback function: usb1208ls_PanelCallback */
#define  USB1208LS_ANALOGUE_IN            2
#define  USB1208LS_INPUT                  3       /* callback function: usb1208ls_ControlCallback */
#define  USB1208LS_RANGE                  4       /* callback function: usb1208ls_ControlCallback */
#define  USB1208LS_ACQ                    5       /* callback function: usb1208ls_ControlCallback */
#define  USB1208LS_DIGITAL_IN_1           6
#define  USB1208LS_DIGITAL_IN_0           7
#define  USB1208LS_NUMERIC                8       /* callback function: usb1208ls_ControlCallback */
#define  USB1208LS_DECORATION             9


     /* Menu Bars, Menus, and Menu Items: */

#define  USBMENU                          1
#define  USBMENU_SOURCE                   2
#define  USBMENU_SOURCE_DAC1              3       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_SOURCE_DAC2              4       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_SOURCE_DAC3              5       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_SOURCE_DAC4              6       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_MEAS                     7
#define  USBMENU_MEAS_IN_0                8       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_MEAS_IN_1                9       /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_MEAS_IN_2                10      /* callback function: usb1208ls_MenuCallback */
#define  USBMENU_MEAS_IN_3                11      /* callback function: usb1208ls_MenuCallback */


     /* Callback Prototypes: */

int  CVICALLBACK AcqDataNoteCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK das6036_ControlCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK usb1208ls_ControlCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK usb1208ls_MeasureControlCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK usb1208ls_MenuCallback(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK usb1208ls_PanelCallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK util_HidePanelCallback(int panel, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
