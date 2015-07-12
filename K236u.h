/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2013. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  K236                             1       /* callback function: K236ControlPanelCallback */
#define  K236_IDENTIFY                    2       /* control type: toggle, callback function: K236ControlCallback */
#define  K236_OPERATE                     3       /* control type: toggle, callback function: K236ControlCallback */
#define  K236_SELECT                      4       /* control type: binary, callback function: K236ControlCallback */
#define  K236_SENSE                       5       /* control type: binary, callback function: K236ControlCallback */
#define  K236_SOURCE                      6       /* control type: numeric, callback function: K236SourceCallback */
#define  K236_SOURCE_I_RANGE              7       /* control type: ring, callback function: K236ControlCallback */
#define  K236_SOURCE_V_RANGE              8       /* control type: ring, callback function: K236ControlCallback */
#define  K236_DELAY                       9       /* control type: toggle, callback function: K236ControlCallback */
#define  K236_LEVEL                       10      /* control type: numeric, callback function: K236ControlCallback */
#define  K236_MEAS_I_RANGE                11      /* control type: ring, callback function: K236ControlCallback */
#define  K236_MEAS_V_RANGE                12      /* control type: ring, callback function: K236ControlCallback */
#define  K236_FILTER                      13      /* control type: ring, callback function: K236ControlCallback */
#define  K236_INTTIME                     14      /* control type: ring, callback function: K236ControlCallback */
#define  K236_SUPPRESS                    15      /* control type: toggle, callback function: K236ControlCallback */
#define  K236_SUPDISPLAY                  16      /* control type: numeric, callback function: (none) */
#define  K236_OVERLIMIT                   17      /* control type: LED, callback function: (none) */
#define  K236_MEASURE                     18      /* control type: numeric, callback function: (none) */
#define  K236_SOURCETEXT                  19      /* control type: textMsg, callback function: (none) */
#define  K236_MEASURETEXT                 20      /* control type: textMsg, callback function: (none) */
#define  K236_TEXT_1                      21      /* control type: textMsg, callback function: (none) */
#define  K236_DECORATION                  22      /* control type: deco, callback function: (none) */

#define  K236_MEAS                        2
#define  K236_MEAS_LABEL                  2       /* control type: string, callback function: K236MeasControlCallback */
#define  K236_MEAS_COEFF                  3       /* control type: numeric, callback function: K236MeasControlCallback */
#define  K236_MEAS_MEAS                   4       /* control type: numeric, callback function: (none) */
#define  K236_MEAS_ACQ                    5       /* control type: toggle, callback function: K236MeasControlCallback */
#define  K236_MEAS_NOTE                   6       /* control type: toggle, callback function: AcqDataNoteCallback */
#define  K236_MEAS_CLOSE                  7       /* control type: toggle, callback function: K236MeasControlCallback */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  K236MENUS                        1
#define  K236MENUS_FILE                   2
#define  K236MENUS_FILE_LOAD              3       /* callback function: LoadK236Callback */
#define  K236MENUS_FILE_SAVE              4       /* callback function: SaveK236Callback */
#define  K236MENUS_FILE_SEP_1             5
#define  K236MENUS_FILE_GPIB              6       /* callback function: OperateDevCallback */
#define  K236MENUS_SOURCE                 7       /* callback function: K236SourceSetupCallback */
#define  K236MENUS_MEASURE                8       /* callback function: K236MeasureSetupCallback */


     /* Callback Prototypes: */

int  CVICALLBACK AcqDataNoteCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK K236ControlCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK K236ControlPanelCallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK K236MeasControlCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK K236MeasureSetupCallback(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK K236SourceCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK K236SourceSetupCallback(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK LoadK236Callback(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK OperateDevCallback(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK SaveK236Callback(int menubar, int menuItem, void *callbackData, int panel);


#ifdef __cplusplus
    }
#endif
