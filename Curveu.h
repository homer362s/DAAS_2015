/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2007. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  CURVEATTR                       1
#define  CURVEATTR_LABEL                 2       /* callback function: CurveAttrCallback */
#define  CURVEATTR_X0_LABEL              3       /* callback function: CurveAttrCallback */
#define  CURVEATTR_X0_READING            4       /* callback function: CurveAttrCallback */
#define  CURVEATTR_XCHAN                 5       /* callback function: CurveXChanCallback */
#define  CURVEATTR_XCHANINFO             6       /* callback function: CurveAttrCallback */
#define  CURVEATTR_YCHAN                 7       /* callback function: CurveYChanCallback */
#define  CURVEATTR_YCHANINFO             8       /* callback function: CurveAttrCallback */
#define  CURVEATTR_POINTSTYLE            9       /* callback function: CurveAttrCallback */
#define  CURVEATTR_PLOTSTYLE             10      /* callback function: CurveAttrCallback */
#define  CURVEATTR_LINESTYLE             11      /* callback function: CurveAttrCallback */
#define  CURVEATTR_PTFREQ                12      /* callback function: CurveAttrCallback */
#define  CURVEATTR_HIDDEN                13      /* callback function: CurveAttrCallback */
#define  CURVEATTR_COLOR                 14      /* callback function: CurveAttrCallback */
#define  CURVEATTR_NOTE                  15      /* callback function: util_NoteCallback */

#define  CURVEINFO                       2
#define  CURVEINFO_LIST                  2
#define  CURVEINFO_CLOSE                 3       /* callback function: util_DiscardCallback */
#define  CURVEINFO_TEXT_1                4
#define  CURVEINFO_TEXT_2                5
#define  CURVEINFO_TEXT_3                6
#define  CURVEINFO_TEXT_4                7
#define  CURVEINFO_TEXT_5                8
#define  CURVEINFO_TEXT_6                9
#define  CURVEINFO_TEXT_7                10
#define  CURVEINFO_TEXT_8                11

#define  CURVES                          3       /* callback function: util_HidePanelCallback */
#define  CURVES_LIST                     2       /* callback function: CurveSelectCallback */
#define  CURVES_INDEX                    3       /* callback function: CurveIndexCallback */
#define  CURVES_NCURVES                  4
#define  CURVES_INFO                     5       /* callback function: CurveInfoCallback */
#define  CURVES_LOAD                     6       /* callback function: LoadCurvesCallback */
#define  CURVES_SAVE                     7       /* callback function: InitSaveCurvesCallback */
#define  CURVES_REMOVE                   8       /* callback function: InitRemoveCurvesCallback */
#define  CURVES_CREATE                   9       /* callback function: CreateCurveCallback */
#define  CURVES_DECORATION               10

#define  CURVESAVE                       4
#define  CURVESAVE_LIST                  2
#define  CURVESAVE_ORIGIN                3       /* callback function: SaveOriginCurvesCallback */
#define  CURVESAVE_DTS                   4       /* callback function: SaveDTSCurvesCallback */
#define  CURVESAVE_MATLAB                5       /* callback function: SaveMATLABCurvesCallback */
#define  CURVESAVE_DAAS_2                6       /* callback function: SaveOneXCurvesCallback */
#define  CURVESAVE_DAAS                  7       /* callback function: SaveDAASCurvesCallback */
#define  CURVESAVE_ALL                   8       /* callback function: SaveCurveSelectAllCallback */
#define  CURVESAVE_CLOSE                 9       /* callback function: util_DiscardCallback */

#define  CURVEVIEW                       5
#define  CURVEVIEW_CURVES                2       /* callback function: CurveViewSelectCallback */
#define  CURVEVIEW_OFFSET_VAL            3
#define  CURVEVIEW_OFFSET                4       /* callback function: CurveViewWindowCallback */
#define  CURVEVIEW_TOTALPTS              5
#define  CURVEVIEW_PTS_2                 6       /* callback function: CurveViewWindowCallback */
#define  CURVEVIEW_PTS_1                 7       /* callback function: CurveViewWindowCallback */
#define  CURVEVIEW_MARKER                8       /* callback function: CurveViewMarkerCallback */
#define  CURVEVIEW_M1X                   9
#define  CURVEVIEW_M1Y                   10
#define  CURVEVIEW_AXIS                  11      /* callback function: CurveViewSelectAxisCallback */
#define  CURVEVIEW_LOG                   12      /* callback function: CurveViewAxisCallback */
#define  CURVEVIEW_GRID                  13      /* callback function: CurveViewAxisCallback */
#define  CURVEVIEW_DIR                   14      /* callback function: CurveViewDirCallback */
#define  CURVEVIEW_SCATTER               15      /* callback function: CurveViewWindowCallback */
#define  CURVEVIEW_MASK                  16      /* callback function: CurveViewMaskCallback */
#define  CURVEVIEW_DONE                  17      /* callback function: CurveViewDoneCallback */
#define  CURVEVIEW_BOX_1                 18
#define  CURVEVIEW_BOX_2                 19
#define  CURVEVIEW_GRAPH                 20      /* callback function: CurveViewGraphCallback */


     /* Menu Bars, Menus, and Menu Items: */

#define  CURVEMENUS                      1
#define  CURVEMENUS_PROC                 2
#define  CURVEMENUS_PROC_INTEG           3
#define  CURVEMENUS_PROC_DIFF            4
#define  CURVEMENUS_PROC_FILTER          5
#define  CURVEMENUS_PROC_SMOOTH          6
#define  CURVEMENUS_PROC_OFFSET          7
#define  CURVEMENUS_PROC_REVERSE         8
#define  CURVEMENUS_PROC_SORT            9
#define  CURVEMENUS_PROC_SORT_SUBMENU    10
#define  CURVEMENUS_PROC_SORT_ASC        11
#define  CURVEMENUS_PROC_SORT_DESC       12
#define  CURVEMENUS_MEAS                 13
#define  CURVEMENUS_MEAS_ACDC            14
#define  CURVEMENUS_MEAS_AMPSPEC         15
#define  CURVEMENUS_MEAS_PWRSPEC         16
#define  CURVEMENUS_FIT                  17
#define  CURVEMENUS_FIT_LINEAR           18
#define  CURVEMENUS_FIT_EXP              19
#define  CURVEMENUS_FIT_POLY             20
#define  CURVEMENUS_INTERP               21
#define  CURVEMENUS_INTERP_POLY          22
#define  CURVEMENUS_INTERP_RAT           23
#define  CURVEMENUS_INTERP_SPLINE        24


     /* Callback Prototypes: */ 

int  CVICALLBACK CreateCurveCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveAttrCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveIndexCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveInfoCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveSelectCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewAxisCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewDirCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewDoneCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewGraphCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewMarkerCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewMaskCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewSelectAxisCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewSelectCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveViewWindowCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveXChanCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK CurveYChanCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK InitRemoveCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK InitSaveCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK LoadCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveCurveSelectAllCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveDAASCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveDTSCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveMATLABCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveOneXCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SaveOriginCurvesCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK util_DiscardCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK util_HidePanelCallback(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK util_NoteCallback(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
