/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RedPandaIDE/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10MainWindowE = QtMocHelpers::stringData(
    "MainWindow",
    "logToolsOutput",
    "",
    "msg",
    "onCompileIssue",
    "PCompileIssue",
    "issue",
    "clearToolsOutput",
    "clearTodos",
    "onCompileStarted",
    "onProjectCompileStarted",
    "onSyntaxCheckStarted",
    "onCompileFinished",
    "filename",
    "isCheckSyntax",
    "onCompileErrorOccured",
    "reason",
    "onRunErrorOccured",
    "onRunFinished",
    "onRunPausingForFinish",
    "onRunProblemFinished",
    "onOJProblemCaseStarted",
    "id",
    "current",
    "total",
    "onOJProblemCaseFinished",
    "onOJProblemCaseNewOutputGetted",
    "line",
    "onOJProblemCaseResetOutput",
    "cleanUpCPUDialog",
    "onDebugCommandInput",
    "command",
    "onDebugEvaluateInput",
    "onDebugMemoryAddressInput",
    "onParserProgress",
    "fileName",
    "onStartParsing",
    "onEndParsing",
    "updateView",
    "onEvalValueReady",
    "value",
    "onLocalsReady",
    "onEditorContextMenu",
    "pos",
    "onEditorRightTabContextMenu",
    "onEditorLeftTabContextMenu",
    "onEditorTabContextMenu",
    "QTabWidget*",
    "tabWidget",
    "disableDebugActions",
    "enableDebugActions",
    "stopDebugForNoSymbolTable",
    "onTodoParsingFile",
    "onTodoParseStarted",
    "onTodoFound",
    "lineNo",
    "ch",
    "onTodoParseFinished",
    "onWatchpointHitted",
    "var",
    "oldVal",
    "newVal",
    "setActiveBreakpoint",
    "FileName",
    "Line",
    "setFocus",
    "updateDPI",
    "oldDPI",
    "newDPI",
    "onFileSaved",
    "path",
    "inProject",
    "onDebugFinished",
    "setupSlotsForProject",
    "onProjectUnitAdded",
    "onProjectUnitRemoved",
    "onProjectUnitRenamed",
    "oldFilename",
    "newFilename",
    "onProjectViewNodeRenamed",
    "setDockExplorerToArea",
    "Qt::DockWidgetArea",
    "area",
    "setDockMessagesToArea",
    "invalidateProjectProxyModel",
    "onEditorRenamed",
    "firstSave",
    "onAutoSaveTimeout",
    "onFileChanged",
    "onDirChanged",
    "onFilesViewPathChanged",
    "onWatchViewContextMenu",
    "onBookmarkContextMenu",
    "onTableIssuesContextMenu",
    "onSearchViewContextMenu",
    "onBreakpointsViewContextMenu",
    "onProjectViewContextMenu",
    "onClassBrowserContextMenu",
    "onDebugConsoleContextMenu",
    "onFileEncodingContextMenu",
    "onFilesViewContextMenu",
    "onLstProblemSetContextMenu",
    "onTableProblemCasesContextMenu",
    "onToolsOutputContextMenu",
    "onProblemSetIndexChanged",
    "QModelIndex",
    "previous",
    "onProblemCaseIndexChanged",
    "onProblemNameChanged",
    "index",
    "onProblemRunCurrentCase",
    "onProblemBatchSetCases",
    "onNewProblemReceived",
    "num",
    "POJProblem",
    "newProblem",
    "updateProblemTitle",
    "onEditorClosed",
    "onToolsOutputClear",
    "onToolsOutputCopy",
    "onToolsOutputSelectAll",
    "onShowInsertCodeSnippetMenu",
    "onFilesViewCreateFolderFolderLoaded",
    "onFilesViewCreateFolder",
    "onFilesViewCreateFile",
    "onFilesViewRemoveFiles",
    "onFilesViewRename",
    "onNewProblemSet",
    "onProblemProperties",
    "onProblemOpenSource",
    "onProblemRename",
    "onProblemGotoUrl",
    "onRenameProblemSet",
    "onBookmarkRemove",
    "onBookmarkRemoveAll",
    "onBookmarkModify",
    "onDebugConsoleShowDetailLog",
    "onDebugConsolePaste",
    "onDebugConsoleSelectAll",
    "onDebugConsoleCopy",
    "onDebugConsoleClear",
    "onBreakpointTableDoubleClicked",
    "onFilesViewOpenInExplorer",
    "onFilesViewOpenInTerminal",
    "onFilesViewOpenWithExternal",
    "onFilesViewOpen",
    "onClassBrowserGotoDeclaration",
    "onClassBrowserGotoDefinition",
    "onClassBrowserShowInherited",
    "onClassBrowserSortByType",
    "onClassBrowserSortByName",
    "onClassBrowserChangeScope",
    "onClassBrowserRefreshStart",
    "onClassBrowserRefreshEnd",
    "onProjectSwitchCustomViewMode",
    "onProjectSwitchFileSystemViewMode",
    "onProjectRemoveFolder",
    "onProjectRenameFolder",
    "onProjectAddFolder",
    "onProjectRenameUnit",
    "onBreakpointRemove",
    "onBreakpointViewRemoveAll",
    "onModifyBreakpointCondition",
    "onSearchViewClearAll",
    "onSearchViewClear",
    "onTableIssuesClear",
    "onTableIssuesCopyAll",
    "onTableIssuesCopy",
    "on_actionNew_triggered",
    "on_EditorTabsLeft_tabCloseRequested",
    "on_EditorTabsRight_tabCloseRequested",
    "onFileSystemModelLayoutChanged",
    "onFileRenamedInFileSystemModel",
    "oldName",
    "newName",
    "on_actionOpen_triggered",
    "on_actionSave_triggered",
    "on_actionSaveAs_triggered",
    "on_actionOptions_triggered",
    "onCompilerSetChanged",
    "on_actionCompile_triggered",
    "on_actionRun_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionSelectAll_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionIndent_triggered",
    "on_actionUnIndent_triggered",
    "on_actionToggleComment_triggered",
    "on_actionUnfoldAll_triggered",
    "on_actionFoldAll_triggered",
    "on_tableIssues_doubleClicked",
    "on_actionEncode_in_ANSI_triggered",
    "on_actionEncode_in_UTF_8_triggered",
    "on_actionAuto_Detect_triggered",
    "on_actionConvert_to_ANSI_triggered",
    "on_actionConvert_to_UTF_8_triggered",
    "on_tabMessages_tabBarClicked",
    "on_actionRebuild_triggered",
    "on_actionStop_Execution_triggered",
    "on_actionDebug_triggered",
    "on_actionStep_Over_triggered",
    "on_actionStep_Into_triggered",
    "on_actionStep_Out_triggered",
    "on_actionRun_To_Cursor_triggered",
    "on_actionContinue_triggered",
    "on_actionAdd_Watch_triggered",
    "on_actionView_CPU_Window_triggered",
    "on_actionExit_triggered",
    "on_actionFind_triggered",
    "on_actionFind_in_files_triggered",
    "on_actionReplace_triggered",
    "on_actionFind_Next_triggered",
    "on_actionFind_Previous_triggered",
    "on_cbSearchHistory_currentIndexChanged",
    "on_btnSearchAgain_clicked",
    "on_actionRemove_Watch_triggered",
    "on_actionRemove_All_Watches_triggered",
    "on_actionModify_Watch_triggered",
    "on_actionReformat_Code_triggered",
    "on_actionBack_triggered",
    "on_actionForward_triggered",
    "on_tabExplorer_tabBarClicked",
    "on_EditorTabsLeft_tabBarDoubleClicked",
    "on_EditorTabsRight_tabBarDoubleClicked",
    "on_actionClose_triggered",
    "on_actionClose_All_triggered",
    "on_actionMaximize_Editor_triggered",
    "on_actionNext_Editor_triggered",
    "on_actionPrevious_Editor_triggered",
    "on_actionToggle_Breakpoint_triggered",
    "on_actionClear_all_breakpoints_triggered",
    "on_actionBreakpoint_property_triggered",
    "on_actionGoto_Declaration_triggered",
    "on_actionGoto_Definition_triggered",
    "on_actionFind_references_triggered",
    "on_actionOpen_Containing_Folder_triggered",
    "on_actionOpen_Terminal_triggered",
    "on_actionFile_Properties_triggered",
    "on_searchView_doubleClicked",
    "on_tblStackTrace_doubleClicked",
    "on_tblBreakpoints_doubleClicked",
    "on_projectView_doubleClicked",
    "on_actionClose_Project_triggered",
    "on_actionProject_options_triggered",
    "on_actionNew_Project_triggered",
    "on_actionSaveAll_triggered",
    "on_actionProject_New_File_triggered",
    "on_actionAdd_to_project_triggered",
    "on_actionRemove_from_project_triggered",
    "on_actionView_Makefile_triggered",
    "on_actionMakeClean_triggered",
    "on_actionProject_Open_Folder_In_Explorer_triggered",
    "on_actionProject_Open_In_Terminal_triggered",
    "on_classBrowser_doubleClicked",
    "on_EditorTabsLeft_currentChanged",
    "on_EditorTabsRight_currentChanged",
    "on_tableTODO_doubleClicked",
    "on_actionAbout_triggered",
    "on_actionRename_Symbol_triggered",
    "on_btnReplace_clicked",
    "on_btnCancelReplace_clicked",
    "on_actionPrint_triggered",
    "on_actionExport_As_RTF_triggered",
    "on_actionExport_As_HTML_triggered",
    "on_actionMove_To_Other_View_triggered",
    "on_actionC_C_Reference_triggered",
    "on_actionEGE_Manual_triggered",
    "on_tableBookmark_doubleClicked",
    "on_actionModify_Bookmark_Description_triggered",
    "on_actionLocate_in_Files_View_triggered",
    "on_treeFiles_doubleClicked",
    "on_actionOpen_Folder_triggered",
    "on_actionRun_Parameters_triggered",
    "onAddProblem",
    "onRemoveProblem",
    "onSaveProblemSet",
    "onLoadProblemSet",
    "onAddProblemCase",
    "onProblemRunAllCases",
    "on_actionC_Reference_triggered",
    "onRemoveProblemCases",
    "onOpenProblemAnswerFile",
    "on_actionTool_Window_Bars_triggered",
    "on_actionStatus_Bar_triggered",
    "on_actionProject_triggered",
    "on_actionWatch_triggered",
    "on_actionStructure_triggered",
    "on_actionFiles_triggered",
    "on_actionProblem_Set_triggered",
    "on_actionIssues_triggered",
    "on_actionTools_Output_triggered",
    "on_actionDebug_Window_triggered",
    "on_actionSearch_triggered",
    "on_actionTODO_triggered",
    "on_actionBookmark_triggered",
    "on_actionProblem_triggered",
    "on_actionDelete_Line_triggered",
    "on_actionDuplicate_Line_triggered",
    "on_actionDelete_Word_triggered",
    "on_actionDelete_to_EOL_triggered",
    "on_actionDelete_to_BOL_triggered",
    "onOpenCaseValidationOptions",
    "on_actionInterrupt_triggered",
    "on_actionDelete_Last_Word_triggered",
    "on_actionDelete_to_Word_End_triggered",
    "on_actionNew_Class_triggered",
    "on_actionNew_Header_triggered",
    "on_actionWebsite_triggered",
    "on_actionFilesView_Hide_Non_Support_Files_toggled",
    "arg1",
    "on_actionToggle_Block_Comment_triggered",
    "on_actionMatch_Bracket_triggered",
    "on_btnProblemCaseInputFileName_clicked",
    "on_btnProblemCaseClearExpectedOutputFileName_clicked",
    "on_btnProblemCaseClearInputFileName_clicked",
    "on_btnProblemCaseExpectedOutputFileName_clicked",
    "on_txtProblemCaseOutput_cursorPositionChanged",
    "on_txtProblemCaseExpected_cursorPositionChanged",
    "on_txtProblemCaseInput_cursorPositionChanged",
    "on_actionMove_Selection_Up_triggered",
    "on_actionMove_Selection_Down_triggered",
    "on_actionConvert_to_UTF_8_BOM_triggered",
    "on_actionEncode_in_UTF_8_BOM_triggered",
    "on_actionCompiler_Options_triggered",
    "on_dockExplorer_dockLocationChanged",
    "on_dockMessages_dockLocationChanged",
    "on_actionToggle_Explorer_Panel_triggered",
    "on_actionToggle_Messages_Panel_triggered",
    "on_actionRaylib_Manual_triggered",
    "on_actionSelect_Word_triggered",
    "on_actionGo_to_Line_triggered",
    "on_actionNew_Template_triggered",
    "on_actionGoto_block_start_triggered",
    "on_actionGoto_block_end_triggered",
    "on_actionSwitchHeaderSource_triggered",
    "on_actionGenerate_Assembly_triggered",
    "onImportFPSProblemSet",
    "on_actionTrim_trailing_spaces_triggered",
    "onExportFPSProblemSet",
    "on_actionToggle_Readonly_triggered",
    "on_actionSubmit_Issues_triggered",
    "on_actionDocument_triggered",
    "on_actionNew_GAS_File_triggered",
    "on_actionGNU_Assembler_Manual_triggered",
    "on_actionAdd_Watchpoint_triggered",
    "on_actionNew_Text_File_triggered",
    "on_actionPage_Up_triggered",
    "on_actionPage_Down_triggered",
    "on_actionGoto_Line_Start_triggered",
    "on_actionGoto_Line_End_triggered",
    "on_actionGoto_File_Start_triggered",
    "on_actionGoto_File_End_triggered",
    "on_actionPage_Up_and_Select_triggered",
    "on_actionPage_Down_and_Select_triggered",
    "on_actionGoto_Page_Start_triggered",
    "on_actionGoto_Page_End_triggered",
    "on_actionGoto_Page_Start_and_Select_triggered",
    "on_actionGoto_Page_End_and_Select_triggered",
    "on_actionGoto_Line_Start_and_Select_triggered",
    "on_actionGoto_Line_End_and_Select_triggered",
    "on_actionGoto_File_Start_and_Select_triggered",
    "on_actionGoto_File_End_and_Select_triggered",
    "on_actionClose_Others_triggered",
    "on_actionOI_Wiki_triggered",
    "on_actionTurtle_Graphics_Manual_triggered",
    "on_cbProblemCaseValidateType_currentIndexChanged",
    "on_actionToggle_Bookmark_triggered",
    "on_actionCode_Completion_triggered",
    "on_actionC_C_Header_triggered",
    "on_actionText_File_triggered",
    "on_actionC_File_triggered",
    "on_actionCPP_File_triggered",
    "on_actionATT_ASM_triggered",
    "on_actionIntel_ASM_triggered",
    "on_actionGenerate_GIMPLE_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10MainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     333,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1, 2012,    2, 0x0a,    1 /* Public */,
       4,    1, 2015,    2, 0x0a,    3 /* Public */,
       7,    0, 2018,    2, 0x0a,    5 /* Public */,
       8,    0, 2019,    2, 0x0a,    6 /* Public */,
       9,    0, 2020,    2, 0x0a,    7 /* Public */,
      10,    0, 2021,    2, 0x0a,    8 /* Public */,
      11,    0, 2022,    2, 0x0a,    9 /* Public */,
      12,    2, 2023,    2, 0x0a,   10 /* Public */,
      15,    1, 2028,    2, 0x0a,   13 /* Public */,
      17,    1, 2031,    2, 0x0a,   15 /* Public */,
      18,    0, 2034,    2, 0x0a,   17 /* Public */,
      19,    0, 2035,    2, 0x0a,   18 /* Public */,
      20,    0, 2036,    2, 0x0a,   19 /* Public */,
      21,    3, 2037,    2, 0x0a,   20 /* Public */,
      25,    3, 2044,    2, 0x0a,   24 /* Public */,
      26,    2, 2051,    2, 0x0a,   28 /* Public */,
      28,    2, 2056,    2, 0x0a,   31 /* Public */,
      29,    0, 2061,    2, 0x0a,   34 /* Public */,
      30,    1, 2062,    2, 0x0a,   35 /* Public */,
      32,    0, 2065,    2, 0x0a,   37 /* Public */,
      33,    0, 2066,    2, 0x0a,   38 /* Public */,
      34,    3, 2067,    2, 0x0a,   39 /* Public */,
      36,    0, 2074,    2, 0x0a,   43 /* Public */,
      37,    2, 2075,    2, 0x0a,   44 /* Public */,
      39,    1, 2080,    2, 0x0a,   47 /* Public */,
      41,    1, 2083,    2, 0x0a,   49 /* Public */,
      42,    1, 2086,    2, 0x0a,   51 /* Public */,
      44,    1, 2089,    2, 0x0a,   53 /* Public */,
      45,    1, 2092,    2, 0x0a,   55 /* Public */,
      46,    2, 2095,    2, 0x0a,   57 /* Public */,
      49,    0, 2100,    2, 0x0a,   60 /* Public */,
      50,    0, 2101,    2, 0x0a,   61 /* Public */,
      51,    0, 2102,    2, 0x0a,   62 /* Public */,
      52,    1, 2103,    2, 0x0a,   63 /* Public */,
      53,    0, 2106,    2, 0x0a,   65 /* Public */,
      54,    4, 2107,    2, 0x0a,   66 /* Public */,
      57,    0, 2116,    2, 0x0a,   71 /* Public */,
      58,    3, 2117,    2, 0x0a,   72 /* Public */,
      62,    3, 2124,    2, 0x0a,   76 /* Public */,
      66,    2, 2131,    2, 0x0a,   80 /* Public */,
      69,    2, 2136,    2, 0x0a,   83 /* Public */,
      72,    0, 2141,    2, 0x0a,   86 /* Public */,
      73,    0, 2142,    2, 0x08,   87 /* Private */,
      74,    1, 2143,    2, 0x08,   88 /* Private */,
      75,    1, 2146,    2, 0x08,   90 /* Private */,
      76,    2, 2149,    2, 0x08,   92 /* Private */,
      79,    0, 2154,    2, 0x08,   95 /* Private */,
      80,    1, 2155,    2, 0x08,   96 /* Private */,
      83,    1, 2158,    2, 0x08,   98 /* Private */,
      84,    0, 2161,    2, 0x08,  100 /* Private */,
      85,    3, 2162,    2, 0x08,  101 /* Private */,
      87,    0, 2169,    2, 0x08,  105 /* Private */,
      88,    1, 2170,    2, 0x08,  106 /* Private */,
      89,    1, 2173,    2, 0x08,  108 /* Private */,
      90,    0, 2176,    2, 0x08,  110 /* Private */,
      91,    1, 2177,    2, 0x08,  111 /* Private */,
      92,    1, 2180,    2, 0x08,  113 /* Private */,
      93,    1, 2183,    2, 0x08,  115 /* Private */,
      94,    1, 2186,    2, 0x08,  117 /* Private */,
      95,    1, 2189,    2, 0x08,  119 /* Private */,
      96,    1, 2192,    2, 0x08,  121 /* Private */,
      97,    1, 2195,    2, 0x08,  123 /* Private */,
      98,    1, 2198,    2, 0x08,  125 /* Private */,
      99,    1, 2201,    2, 0x08,  127 /* Private */,
     100,    1, 2204,    2, 0x08,  129 /* Private */,
     101,    1, 2207,    2, 0x08,  131 /* Private */,
     102,    1, 2210,    2, 0x08,  133 /* Private */,
     103,    1, 2213,    2, 0x08,  135 /* Private */,
     104,    2, 2216,    2, 0x08,  137 /* Private */,
     107,    2, 2221,    2, 0x08,  140 /* Private */,
     108,    1, 2226,    2, 0x08,  143 /* Private */,
     110,    0, 2229,    2, 0x08,  145 /* Private */,
     111,    0, 2230,    2, 0x08,  146 /* Private */,
     112,    3, 2231,    2, 0x08,  147 /* Private */,
     116,    0, 2238,    2, 0x08,  151 /* Private */,
     117,    0, 2239,    2, 0x08,  152 /* Private */,
     118,    0, 2240,    2, 0x08,  153 /* Private */,
     119,    0, 2241,    2, 0x08,  154 /* Private */,
     120,    0, 2242,    2, 0x08,  155 /* Private */,
     121,    0, 2243,    2, 0x08,  156 /* Private */,
     122,    1, 2244,    2, 0x08,  157 /* Private */,
     123,    0, 2247,    2, 0x08,  159 /* Private */,
     124,    0, 2248,    2, 0x08,  160 /* Private */,
     125,    0, 2249,    2, 0x08,  161 /* Private */,
     126,    0, 2250,    2, 0x08,  162 /* Private */,
     127,    0, 2251,    2, 0x08,  163 /* Private */,
     128,    0, 2252,    2, 0x08,  164 /* Private */,
     129,    0, 2253,    2, 0x08,  165 /* Private */,
     130,    0, 2254,    2, 0x08,  166 /* Private */,
     131,    0, 2255,    2, 0x08,  167 /* Private */,
     132,    0, 2256,    2, 0x08,  168 /* Private */,
     133,    0, 2257,    2, 0x08,  169 /* Private */,
     134,    0, 2258,    2, 0x08,  170 /* Private */,
     135,    0, 2259,    2, 0x08,  171 /* Private */,
     136,    0, 2260,    2, 0x08,  172 /* Private */,
     137,    0, 2261,    2, 0x08,  173 /* Private */,
     138,    0, 2262,    2, 0x08,  174 /* Private */,
     139,    0, 2263,    2, 0x08,  175 /* Private */,
     140,    0, 2264,    2, 0x08,  176 /* Private */,
     141,    1, 2265,    2, 0x08,  177 /* Private */,
     142,    0, 2268,    2, 0x08,  179 /* Private */,
     143,    0, 2269,    2, 0x08,  180 /* Private */,
     144,    0, 2270,    2, 0x08,  181 /* Private */,
     145,    0, 2271,    2, 0x08,  182 /* Private */,
     146,    0, 2272,    2, 0x08,  183 /* Private */,
     147,    0, 2273,    2, 0x08,  184 /* Private */,
     148,    0, 2274,    2, 0x08,  185 /* Private */,
     149,    0, 2275,    2, 0x08,  186 /* Private */,
     150,    0, 2276,    2, 0x08,  187 /* Private */,
     151,    0, 2277,    2, 0x08,  188 /* Private */,
     152,    0, 2278,    2, 0x08,  189 /* Private */,
     153,    0, 2279,    2, 0x08,  190 /* Private */,
     154,    0, 2280,    2, 0x08,  191 /* Private */,
     155,    0, 2281,    2, 0x08,  192 /* Private */,
     156,    0, 2282,    2, 0x08,  193 /* Private */,
     157,    0, 2283,    2, 0x08,  194 /* Private */,
     158,    0, 2284,    2, 0x08,  195 /* Private */,
     159,    0, 2285,    2, 0x08,  196 /* Private */,
     160,    0, 2286,    2, 0x08,  197 /* Private */,
     161,    0, 2287,    2, 0x08,  198 /* Private */,
     162,    0, 2288,    2, 0x08,  199 /* Private */,
     163,    0, 2289,    2, 0x08,  200 /* Private */,
     164,    0, 2290,    2, 0x08,  201 /* Private */,
     165,    0, 2291,    2, 0x08,  202 /* Private */,
     166,    0, 2292,    2, 0x08,  203 /* Private */,
     167,    0, 2293,    2, 0x08,  204 /* Private */,
     168,    0, 2294,    2, 0x08,  205 /* Private */,
     169,    1, 2295,    2, 0x08,  206 /* Private */,
     170,    1, 2298,    2, 0x08,  208 /* Private */,
     171,    0, 2301,    2, 0x08,  210 /* Private */,
     172,    3, 2302,    2, 0x08,  211 /* Private */,
     175,    0, 2309,    2, 0x08,  215 /* Private */,
     176,    0, 2310,    2, 0x08,  216 /* Private */,
     177,    0, 2311,    2, 0x08,  217 /* Private */,
     178,    0, 2312,    2, 0x08,  218 /* Private */,
     179,    1, 2313,    2, 0x08,  219 /* Private */,
     180,    0, 2316,    2, 0x08,  221 /* Private */,
     181,    0, 2317,    2, 0x08,  222 /* Private */,
     182,    0, 2318,    2, 0x08,  223 /* Private */,
     183,    0, 2319,    2, 0x08,  224 /* Private */,
     184,    0, 2320,    2, 0x08,  225 /* Private */,
     185,    0, 2321,    2, 0x08,  226 /* Private */,
     186,    0, 2322,    2, 0x08,  227 /* Private */,
     187,    0, 2323,    2, 0x08,  228 /* Private */,
     188,    0, 2324,    2, 0x08,  229 /* Private */,
     189,    0, 2325,    2, 0x08,  230 /* Private */,
     190,    0, 2326,    2, 0x08,  231 /* Private */,
     191,    0, 2327,    2, 0x08,  232 /* Private */,
     192,    0, 2328,    2, 0x08,  233 /* Private */,
     193,    1, 2329,    2, 0x08,  234 /* Private */,
     194,    0, 2332,    2, 0x08,  236 /* Private */,
     195,    0, 2333,    2, 0x08,  237 /* Private */,
     196,    0, 2334,    2, 0x08,  238 /* Private */,
     197,    0, 2335,    2, 0x08,  239 /* Private */,
     198,    0, 2336,    2, 0x08,  240 /* Private */,
     199,    1, 2337,    2, 0x08,  241 /* Private */,
     200,    0, 2340,    2, 0x08,  243 /* Private */,
     201,    0, 2341,    2, 0x08,  244 /* Private */,
     202,    0, 2342,    2, 0x08,  245 /* Private */,
     203,    0, 2343,    2, 0x08,  246 /* Private */,
     204,    0, 2344,    2, 0x08,  247 /* Private */,
     205,    0, 2345,    2, 0x08,  248 /* Private */,
     206,    0, 2346,    2, 0x08,  249 /* Private */,
     207,    0, 2347,    2, 0x08,  250 /* Private */,
     208,    0, 2348,    2, 0x08,  251 /* Private */,
     209,    0, 2349,    2, 0x08,  252 /* Private */,
     210,    0, 2350,    2, 0x08,  253 /* Private */,
     211,    0, 2351,    2, 0x08,  254 /* Private */,
     212,    0, 2352,    2, 0x08,  255 /* Private */,
     213,    0, 2353,    2, 0x08,  256 /* Private */,
     214,    0, 2354,    2, 0x08,  257 /* Private */,
     215,    0, 2355,    2, 0x08,  258 /* Private */,
     216,    1, 2356,    2, 0x08,  259 /* Private */,
     217,    0, 2359,    2, 0x08,  261 /* Private */,
     218,    0, 2360,    2, 0x08,  262 /* Private */,
     219,    0, 2361,    2, 0x08,  263 /* Private */,
     220,    0, 2362,    2, 0x08,  264 /* Private */,
     221,    0, 2363,    2, 0x08,  265 /* Private */,
     222,    0, 2364,    2, 0x08,  266 /* Private */,
     223,    0, 2365,    2, 0x08,  267 /* Private */,
     224,    1, 2366,    2, 0x08,  268 /* Private */,
     225,    1, 2369,    2, 0x08,  270 /* Private */,
     226,    1, 2372,    2, 0x08,  272 /* Private */,
     227,    0, 2375,    2, 0x08,  274 /* Private */,
     228,    0, 2376,    2, 0x08,  275 /* Private */,
     229,    0, 2377,    2, 0x08,  276 /* Private */,
     230,    0, 2378,    2, 0x08,  277 /* Private */,
     231,    0, 2379,    2, 0x08,  278 /* Private */,
     232,    0, 2380,    2, 0x08,  279 /* Private */,
     233,    0, 2381,    2, 0x08,  280 /* Private */,
     234,    0, 2382,    2, 0x08,  281 /* Private */,
     235,    0, 2383,    2, 0x08,  282 /* Private */,
     236,    0, 2384,    2, 0x08,  283 /* Private */,
     237,    0, 2385,    2, 0x08,  284 /* Private */,
     238,    0, 2386,    2, 0x08,  285 /* Private */,
     239,    0, 2387,    2, 0x08,  286 /* Private */,
     240,    0, 2388,    2, 0x08,  287 /* Private */,
     241,    1, 2389,    2, 0x08,  288 /* Private */,
     242,    1, 2392,    2, 0x08,  290 /* Private */,
     243,    1, 2395,    2, 0x08,  292 /* Private */,
     244,    1, 2398,    2, 0x08,  294 /* Private */,
     245,    0, 2401,    2, 0x08,  296 /* Private */,
     246,    0, 2402,    2, 0x08,  297 /* Private */,
     247,    0, 2403,    2, 0x08,  298 /* Private */,
     248,    0, 2404,    2, 0x08,  299 /* Private */,
     249,    0, 2405,    2, 0x08,  300 /* Private */,
     250,    0, 2406,    2, 0x08,  301 /* Private */,
     251,    0, 2407,    2, 0x08,  302 /* Private */,
     252,    0, 2408,    2, 0x08,  303 /* Private */,
     253,    0, 2409,    2, 0x08,  304 /* Private */,
     254,    0, 2410,    2, 0x08,  305 /* Private */,
     255,    0, 2411,    2, 0x08,  306 /* Private */,
     256,    1, 2412,    2, 0x08,  307 /* Private */,
     257,    1, 2415,    2, 0x08,  309 /* Private */,
     258,    1, 2418,    2, 0x08,  311 /* Private */,
     259,    1, 2421,    2, 0x08,  313 /* Private */,
     260,    0, 2424,    2, 0x08,  315 /* Private */,
     261,    0, 2425,    2, 0x08,  316 /* Private */,
     262,    0, 2426,    2, 0x08,  317 /* Private */,
     263,    0, 2427,    2, 0x08,  318 /* Private */,
     264,    0, 2428,    2, 0x08,  319 /* Private */,
     265,    0, 2429,    2, 0x08,  320 /* Private */,
     266,    0, 2430,    2, 0x08,  321 /* Private */,
     267,    0, 2431,    2, 0x08,  322 /* Private */,
     268,    0, 2432,    2, 0x08,  323 /* Private */,
     269,    0, 2433,    2, 0x08,  324 /* Private */,
     270,    1, 2434,    2, 0x08,  325 /* Private */,
     271,    0, 2437,    2, 0x08,  327 /* Private */,
     272,    0, 2438,    2, 0x08,  328 /* Private */,
     273,    1, 2439,    2, 0x08,  329 /* Private */,
     274,    0, 2442,    2, 0x08,  331 /* Private */,
     275,    0, 2443,    2, 0x08,  332 /* Private */,
     276,    0, 2444,    2, 0x08,  333 /* Private */,
     277,    0, 2445,    2, 0x08,  334 /* Private */,
     278,    0, 2446,    2, 0x08,  335 /* Private */,
     279,    0, 2447,    2, 0x08,  336 /* Private */,
     280,    0, 2448,    2, 0x08,  337 /* Private */,
     281,    0, 2449,    2, 0x08,  338 /* Private */,
     282,    0, 2450,    2, 0x08,  339 /* Private */,
     283,    0, 2451,    2, 0x08,  340 /* Private */,
     284,    0, 2452,    2, 0x08,  341 /* Private */,
     285,    0, 2453,    2, 0x08,  342 /* Private */,
     286,    0, 2454,    2, 0x08,  343 /* Private */,
     287,    0, 2455,    2, 0x08,  344 /* Private */,
     288,    0, 2456,    2, 0x08,  345 /* Private */,
     289,    0, 2457,    2, 0x08,  346 /* Private */,
     290,    0, 2458,    2, 0x08,  347 /* Private */,
     291,    0, 2459,    2, 0x08,  348 /* Private */,
     292,    0, 2460,    2, 0x08,  349 /* Private */,
     293,    0, 2461,    2, 0x08,  350 /* Private */,
     294,    0, 2462,    2, 0x08,  351 /* Private */,
     295,    0, 2463,    2, 0x08,  352 /* Private */,
     296,    0, 2464,    2, 0x08,  353 /* Private */,
     297,    0, 2465,    2, 0x08,  354 /* Private */,
     298,    0, 2466,    2, 0x08,  355 /* Private */,
     299,    0, 2467,    2, 0x08,  356 /* Private */,
     300,    0, 2468,    2, 0x08,  357 /* Private */,
     301,    0, 2469,    2, 0x08,  358 /* Private */,
     302,    0, 2470,    2, 0x08,  359 /* Private */,
     303,    0, 2471,    2, 0x08,  360 /* Private */,
     304,    0, 2472,    2, 0x08,  361 /* Private */,
     305,    0, 2473,    2, 0x08,  362 /* Private */,
     306,    0, 2474,    2, 0x08,  363 /* Private */,
     307,    0, 2475,    2, 0x08,  364 /* Private */,
     308,    0, 2476,    2, 0x08,  365 /* Private */,
     309,    0, 2477,    2, 0x08,  366 /* Private */,
     310,    0, 2478,    2, 0x08,  367 /* Private */,
     311,    1, 2479,    2, 0x08,  368 /* Private */,
     313,    0, 2482,    2, 0x08,  370 /* Private */,
     314,    0, 2483,    2, 0x08,  371 /* Private */,
     315,    0, 2484,    2, 0x08,  372 /* Private */,
     316,    0, 2485,    2, 0x08,  373 /* Private */,
     317,    0, 2486,    2, 0x08,  374 /* Private */,
     318,    0, 2487,    2, 0x08,  375 /* Private */,
     319,    0, 2488,    2, 0x08,  376 /* Private */,
     320,    0, 2489,    2, 0x08,  377 /* Private */,
     321,    0, 2490,    2, 0x08,  378 /* Private */,
     322,    0, 2491,    2, 0x08,  379 /* Private */,
     323,    0, 2492,    2, 0x08,  380 /* Private */,
     324,    0, 2493,    2, 0x08,  381 /* Private */,
     325,    0, 2494,    2, 0x08,  382 /* Private */,
     326,    0, 2495,    2, 0x08,  383 /* Private */,
     327,    1, 2496,    2, 0x08,  384 /* Private */,
     328,    1, 2499,    2, 0x08,  386 /* Private */,
     329,    0, 2502,    2, 0x08,  388 /* Private */,
     330,    0, 2503,    2, 0x08,  389 /* Private */,
     331,    0, 2504,    2, 0x08,  390 /* Private */,
     332,    0, 2505,    2, 0x08,  391 /* Private */,
     333,    0, 2506,    2, 0x08,  392 /* Private */,
     334,    0, 2507,    2, 0x08,  393 /* Private */,
     335,    0, 2508,    2, 0x08,  394 /* Private */,
     336,    0, 2509,    2, 0x08,  395 /* Private */,
     337,    0, 2510,    2, 0x08,  396 /* Private */,
     338,    0, 2511,    2, 0x08,  397 /* Private */,
     339,    0, 2512,    2, 0x08,  398 /* Private */,
     340,    0, 2513,    2, 0x08,  399 /* Private */,
     341,    0, 2514,    2, 0x08,  400 /* Private */,
     342,    0, 2515,    2, 0x08,  401 /* Private */,
     343,    0, 2516,    2, 0x08,  402 /* Private */,
     344,    0, 2517,    2, 0x08,  403 /* Private */,
     345,    0, 2518,    2, 0x08,  404 /* Private */,
     346,    0, 2519,    2, 0x08,  405 /* Private */,
     347,    0, 2520,    2, 0x08,  406 /* Private */,
     348,    0, 2521,    2, 0x08,  407 /* Private */,
     349,    0, 2522,    2, 0x08,  408 /* Private */,
     350,    0, 2523,    2, 0x08,  409 /* Private */,
     351,    0, 2524,    2, 0x08,  410 /* Private */,
     352,    0, 2525,    2, 0x08,  411 /* Private */,
     353,    0, 2526,    2, 0x08,  412 /* Private */,
     354,    0, 2527,    2, 0x08,  413 /* Private */,
     355,    0, 2528,    2, 0x08,  414 /* Private */,
     356,    0, 2529,    2, 0x08,  415 /* Private */,
     357,    0, 2530,    2, 0x08,  416 /* Private */,
     358,    0, 2531,    2, 0x08,  417 /* Private */,
     359,    0, 2532,    2, 0x08,  418 /* Private */,
     360,    0, 2533,    2, 0x08,  419 /* Private */,
     361,    0, 2534,    2, 0x08,  420 /* Private */,
     362,    0, 2535,    2, 0x08,  421 /* Private */,
     363,    0, 2536,    2, 0x08,  422 /* Private */,
     364,    0, 2537,    2, 0x08,  423 /* Private */,
     365,    0, 2538,    2, 0x08,  424 /* Private */,
     366,    0, 2539,    2, 0x08,  425 /* Private */,
     367,    0, 2540,    2, 0x08,  426 /* Private */,
     368,    1, 2541,    2, 0x08,  427 /* Private */,
     369,    0, 2544,    2, 0x08,  429 /* Private */,
     370,    0, 2545,    2, 0x08,  430 /* Private */,
     371,    0, 2546,    2, 0x08,  431 /* Private */,
     372,    0, 2547,    2, 0x08,  432 /* Private */,
     373,    0, 2548,    2, 0x08,  433 /* Private */,
     374,    0, 2549,    2, 0x08,  434 /* Private */,
     375,    0, 2550,    2, 0x08,  435 /* Private */,
     376,    0, 2551,    2, 0x08,  436 /* Private */,
     377,    0, 2552,    2, 0x08,  437 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   35,   24,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   38,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QStringList,   40,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, 0x80000000 | 47, QMetaType::QPoint,   48,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,   13,   55,   56,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   59,   60,   61,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   63,   64,   65,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   67,   68,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   70,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   77,   78,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   77,   78,   86,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, QMetaType::QPoint,   43,
    QMetaType::Void, 0x80000000 | 105, 0x80000000 | 105,   23,  106,
    QMetaType::Void, 0x80000000 | 105, 0x80000000 | 105,   23,  106,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 114,  113,   24,  115,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   70,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 105,  109,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   70,  173,  174,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
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
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Int,  109,
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void, 0x80000000 | 105,  109,
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
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, 0x80000000 | 105,  109,
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
    QMetaType::Void, 0x80000000 | 105,  109,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 105,  109,
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
    QMetaType::Void, QMetaType::Bool,  312,
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, 0x80000000 | 81,   82,
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
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN10MainWindowE.offsetsAndSizes,
    qt_meta_data_ZN10MainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10MainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'logToolsOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onCompileIssue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PCompileIssue, std::false_type>,
        // method 'clearToolsOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearTodos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCompileStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectCompileStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSyntaxCheckStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCompileFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onCompileErrorOccured'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onRunErrorOccured'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onRunFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRunPausingForFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRunProblemFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOJProblemCaseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onOJProblemCaseFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onOJProblemCaseNewOutputGetted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onOJProblemCaseResetOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cleanUpCPUDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugCommandInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDebugEvaluateInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugMemoryAddressInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onParserProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onStartParsing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEndParsing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onEvalValueReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onLocalsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'onEditorContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onEditorRightTabContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onEditorLeftTabContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onEditorTabContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTabWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'disableDebugActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableDebugActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopDebugForNoSymbolTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTodoParsingFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTodoParseStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTodoFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTodoParseFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWatchpointHitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setActiveBreakpoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateDPI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFileSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onDebugFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupSlotsForProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectUnitAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onProjectUnitRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onProjectUnitRenamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onProjectViewNodeRenamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDockExplorerToArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::DockWidgetArea &, std::false_type>,
        // method 'setDockMessagesToArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::DockWidgetArea &, std::false_type>,
        // method 'invalidateProjectProxyModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditorRenamed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onAutoSaveTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDirChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onFilesViewPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWatchViewContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onBookmarkContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableIssuesContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onSearchViewContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onBreakpointsViewContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onProjectViewContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onClassBrowserContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onDebugConsoleContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onFileEncodingContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onFilesViewContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onLstProblemSetContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableProblemCasesContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onToolsOutputContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onProblemSetIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onProblemCaseIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onProblemNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onProblemRunCurrentCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemBatchSetCases'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewProblemReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<POJProblem, std::false_type>,
        // method 'updateProblemTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditorClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToolsOutputClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToolsOutputCopy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onToolsOutputSelectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowInsertCodeSnippetMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewCreateFolderFolderLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onFilesViewCreateFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewCreateFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewRemoveFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewRename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemOpenSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemRename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemGotoUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBookmarkRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBookmarkRemoveAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBookmarkModify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugConsoleShowDetailLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugConsolePaste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugConsoleSelectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugConsoleCopy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDebugConsoleClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBreakpointTableDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onFilesViewOpenInExplorer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewOpenInTerminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewOpenWithExternal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFilesViewOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserGotoDeclaration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserGotoDefinition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserShowInherited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserSortByType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserSortByName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserChangeScope'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserRefreshStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClassBrowserRefreshEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectSwitchCustomViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectSwitchFileSystemViewMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectRemoveFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectRenameFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectAddFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectRenameUnit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBreakpointRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBreakpointViewRemoveAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModifyBreakpointCondition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSearchViewClearAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSearchViewClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTableIssuesClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTableIssuesCopyAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTableIssuesCopy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EditorTabsLeft_tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_EditorTabsRight_tabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFileSystemModelLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFileRenamedInFileSystemModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSaveAs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOptions_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCompilerSetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionCompile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRun_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelectAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionIndent_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUnIndent_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToggleComment_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUnfoldAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFoldAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableIssues_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionEncode_in_ANSI_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEncode_in_UTF_8_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAuto_Detect_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_ANSI_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_UTF_8_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabMessages_tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionRebuild_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStop_Execution_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDebug_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStep_Over_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStep_Into_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStep_Out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRun_To_Cursor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionContinue_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_Watch_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionView_CPU_Window_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_in_files_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReplace_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_Next_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_Previous_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbSearchHistory_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnSearchAgain_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemove_Watch_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemove_All_Watches_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionModify_Watch_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReformat_Code_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBack_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionForward_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tabExplorer_tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_EditorTabsLeft_tabBarDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_EditorTabsRight_tabBarDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionClose_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClose_All_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMaximize_Editor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNext_Editor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPrevious_Editor_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToggle_Breakpoint_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_all_breakpoints_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBreakpoint_property_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Declaration_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Definition_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_references_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_Containing_Folder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_Terminal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFile_Properties_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchView_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tblStackTrace_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tblBreakpoints_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_projectView_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionClose_Project_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProject_options_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_Project_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSaveAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProject_New_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_to_project_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemove_from_project_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionView_Makefile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMakeClean_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProject_Open_Folder_In_Explorer_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProject_Open_In_Terminal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_classBrowser_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_EditorTabsLeft_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_EditorTabsRight_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableTODO_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRename_Symbol_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnReplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnCancelReplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPrint_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExport_As_RTF_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExport_As_HTML_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMove_To_Other_View_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionC_C_Reference_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEGE_Manual_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableBookmark_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionModify_Bookmark_Description_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLocate_in_Files_View_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeFiles_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_actionOpen_Folder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRun_Parameters_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddProblem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveProblem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoadProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddProblemCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProblemRunAllCases'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionC_Reference_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoveProblemCases'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOpenProblemAnswerFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTool_Window_Bars_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStatus_Bar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProject_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionWatch_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStructure_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFiles_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProblem_Set_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionIssues_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTools_Output_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDebug_Window_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSearch_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTODO_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBookmark_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionProblem_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_Line_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDuplicate_Line_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_Word_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_to_EOL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_to_BOL_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOpenCaseValidationOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInterrupt_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_Last_Word_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_to_Word_End_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_Class_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_Header_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionWebsite_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFilesView_Hide_Non_Support_Files_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionToggle_Block_Comment_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMatch_Bracket_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnProblemCaseInputFileName_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnProblemCaseClearExpectedOutputFileName_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnProblemCaseClearInputFileName_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnProblemCaseExpectedOutputFileName_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_txtProblemCaseOutput_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_txtProblemCaseExpected_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_txtProblemCaseInput_cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMove_Selection_Up_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMove_Selection_Down_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConvert_to_UTF_8_BOM_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEncode_in_UTF_8_BOM_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCompiler_Options_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dockExplorer_dockLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::DockWidgetArea &, std::false_type>,
        // method 'on_dockMessages_dockLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::DockWidgetArea &, std::false_type>,
        // method 'on_actionToggle_Explorer_Panel_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToggle_Messages_Panel_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRaylib_Manual_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelect_Word_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGo_to_Line_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_Template_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_block_start_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_block_end_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSwitchHeaderSource_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGenerate_Assembly_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportFPSProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTrim_trailing_spaces_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportFPSProblemSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionToggle_Readonly_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSubmit_Issues_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDocument_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_GAS_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGNU_Assembler_Manual_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_Watchpoint_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_Text_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPage_Up_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPage_Down_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Line_Start_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Line_End_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_File_Start_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_File_End_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPage_Up_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPage_Down_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Page_Start_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Page_End_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Page_Start_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Page_End_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Line_Start_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_Line_End_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_File_Start_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGoto_File_End_and_Select_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClose_Others_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOI_Wiki_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTurtle_Graphics_Manual_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cbProblemCaseValidateType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionToggle_Bookmark_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCode_Completion_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionC_C_Header_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionText_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionC_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCPP_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionATT_ASM_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionIntel_ASM_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionGenerate_GIMPLE_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->logToolsOutput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onCompileIssue((*reinterpret_cast< std::add_pointer_t<PCompileIssue>>(_a[1]))); break;
        case 2: _t->clearToolsOutput(); break;
        case 3: _t->clearTodos(); break;
        case 4: _t->onCompileStarted(); break;
        case 5: _t->onProjectCompileStarted(); break;
        case 6: _t->onSyntaxCheckStarted(); break;
        case 7: _t->onCompileFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->onCompileErrorOccured((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onRunErrorOccured((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->onRunFinished(); break;
        case 11: _t->onRunPausingForFinish(); break;
        case 12: _t->onRunProblemFinished(); break;
        case 13: _t->onOJProblemCaseStarted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->onOJProblemCaseFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->onOJProblemCaseNewOutputGetted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->onOJProblemCaseResetOutput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->cleanUpCPUDialog(); break;
        case 18: _t->onDebugCommandInput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->onDebugEvaluateInput(); break;
        case 20: _t->onDebugMemoryAddressInput(); break;
        case 21: _t->onParserProgress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 22: _t->onStartParsing(); break;
        case 23: _t->onEndParsing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 24: _t->onEvalValueReady((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->onLocalsReady((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 26: _t->onEditorContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 27: _t->onEditorRightTabContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 28: _t->onEditorLeftTabContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 29: _t->onEditorTabContextMenu((*reinterpret_cast< std::add_pointer_t<QTabWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 30: _t->disableDebugActions(); break;
        case 31: _t->enableDebugActions(); break;
        case 32: _t->stopDebugForNoSymbolTable(); break;
        case 33: _t->onTodoParsingFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->onTodoParseStarted(); break;
        case 35: _t->onTodoFound((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 36: _t->onTodoParseFinished(); break;
        case 37: _t->onWatchpointHitted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 38: _t->setActiveBreakpoint((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 39: _t->updateDPI((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 40: _t->onFileSaved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->onDebugFinished(); break;
        case 42: _t->setupSlotsForProject(); break;
        case 43: _t->onProjectUnitAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->onProjectUnitRemoved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->onProjectUnitRenamed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 46: _t->onProjectViewNodeRenamed(); break;
        case 47: _t->setDockExplorerToArea((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetArea>>(_a[1]))); break;
        case 48: _t->setDockMessagesToArea((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetArea>>(_a[1]))); break;
        case 49: _t->invalidateProjectProxyModel(); break;
        case 50: _t->onEditorRenamed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 51: _t->onAutoSaveTimeout(); break;
        case 52: _t->onFileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 53: _t->onDirChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 54: _t->onFilesViewPathChanged(); break;
        case 55: _t->onWatchViewContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 56: _t->onBookmarkContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 57: _t->onTableIssuesContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 58: _t->onSearchViewContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 59: _t->onBreakpointsViewContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 60: _t->onProjectViewContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 61: _t->onClassBrowserContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 62: _t->onDebugConsoleContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 63: _t->onFileEncodingContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 64: _t->onFilesViewContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 65: _t->onLstProblemSetContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 66: _t->onTableProblemCasesContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 67: _t->onToolsOutputContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 68: _t->onProblemSetIndexChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 69: _t->onProblemCaseIndexChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 70: _t->onProblemNameChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 71: _t->onProblemRunCurrentCase(); break;
        case 72: _t->onProblemBatchSetCases(); break;
        case 73: _t->onNewProblemReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<POJProblem>>(_a[3]))); break;
        case 74: _t->updateProblemTitle(); break;
        case 75: _t->onEditorClosed(); break;
        case 76: _t->onToolsOutputClear(); break;
        case 77: _t->onToolsOutputCopy(); break;
        case 78: _t->onToolsOutputSelectAll(); break;
        case 79: _t->onShowInsertCodeSnippetMenu(); break;
        case 80: _t->onFilesViewCreateFolderFolderLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 81: _t->onFilesViewCreateFolder(); break;
        case 82: _t->onFilesViewCreateFile(); break;
        case 83: _t->onFilesViewRemoveFiles(); break;
        case 84: _t->onFilesViewRename(); break;
        case 85: _t->onNewProblemSet(); break;
        case 86: _t->onProblemProperties(); break;
        case 87: _t->onProblemOpenSource(); break;
        case 88: _t->onProblemRename(); break;
        case 89: _t->onProblemGotoUrl(); break;
        case 90: _t->onRenameProblemSet(); break;
        case 91: _t->onBookmarkRemove(); break;
        case 92: _t->onBookmarkRemoveAll(); break;
        case 93: _t->onBookmarkModify(); break;
        case 94: _t->onDebugConsoleShowDetailLog(); break;
        case 95: _t->onDebugConsolePaste(); break;
        case 96: _t->onDebugConsoleSelectAll(); break;
        case 97: _t->onDebugConsoleCopy(); break;
        case 98: _t->onDebugConsoleClear(); break;
        case 99: _t->onBreakpointTableDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 100: _t->onFilesViewOpenInExplorer(); break;
        case 101: _t->onFilesViewOpenInTerminal(); break;
        case 102: _t->onFilesViewOpenWithExternal(); break;
        case 103: _t->onFilesViewOpen(); break;
        case 104: _t->onClassBrowserGotoDeclaration(); break;
        case 105: _t->onClassBrowserGotoDefinition(); break;
        case 106: _t->onClassBrowserShowInherited(); break;
        case 107: _t->onClassBrowserSortByType(); break;
        case 108: _t->onClassBrowserSortByName(); break;
        case 109: _t->onClassBrowserChangeScope(); break;
        case 110: _t->onClassBrowserRefreshStart(); break;
        case 111: _t->onClassBrowserRefreshEnd(); break;
        case 112: _t->onProjectSwitchCustomViewMode(); break;
        case 113: _t->onProjectSwitchFileSystemViewMode(); break;
        case 114: _t->onProjectRemoveFolder(); break;
        case 115: _t->onProjectRenameFolder(); break;
        case 116: _t->onProjectAddFolder(); break;
        case 117: _t->onProjectRenameUnit(); break;
        case 118: _t->onBreakpointRemove(); break;
        case 119: _t->onBreakpointViewRemoveAll(); break;
        case 120: _t->onModifyBreakpointCondition(); break;
        case 121: _t->onSearchViewClearAll(); break;
        case 122: _t->onSearchViewClear(); break;
        case 123: _t->onTableIssuesClear(); break;
        case 124: _t->onTableIssuesCopyAll(); break;
        case 125: _t->onTableIssuesCopy(); break;
        case 126: _t->on_actionNew_triggered(); break;
        case 127: _t->on_EditorTabsLeft_tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 128: _t->on_EditorTabsRight_tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 129: _t->onFileSystemModelLayoutChanged(); break;
        case 130: _t->onFileRenamedInFileSystemModel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 131: _t->on_actionOpen_triggered(); break;
        case 132: _t->on_actionSave_triggered(); break;
        case 133: _t->on_actionSaveAs_triggered(); break;
        case 134: _t->on_actionOptions_triggered(); break;
        case 135: _t->onCompilerSetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 136: _t->on_actionCompile_triggered(); break;
        case 137: _t->on_actionRun_triggered(); break;
        case 138: _t->on_actionUndo_triggered(); break;
        case 139: _t->on_actionRedo_triggered(); break;
        case 140: _t->on_actionCut_triggered(); break;
        case 141: _t->on_actionSelectAll_triggered(); break;
        case 142: _t->on_actionCopy_triggered(); break;
        case 143: _t->on_actionPaste_triggered(); break;
        case 144: _t->on_actionIndent_triggered(); break;
        case 145: _t->on_actionUnIndent_triggered(); break;
        case 146: _t->on_actionToggleComment_triggered(); break;
        case 147: _t->on_actionUnfoldAll_triggered(); break;
        case 148: _t->on_actionFoldAll_triggered(); break;
        case 149: _t->on_tableIssues_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 150: _t->on_actionEncode_in_ANSI_triggered(); break;
        case 151: _t->on_actionEncode_in_UTF_8_triggered(); break;
        case 152: _t->on_actionAuto_Detect_triggered(); break;
        case 153: _t->on_actionConvert_to_ANSI_triggered(); break;
        case 154: _t->on_actionConvert_to_UTF_8_triggered(); break;
        case 155: _t->on_tabMessages_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 156: _t->on_actionRebuild_triggered(); break;
        case 157: _t->on_actionStop_Execution_triggered(); break;
        case 158: _t->on_actionDebug_triggered(); break;
        case 159: _t->on_actionStep_Over_triggered(); break;
        case 160: _t->on_actionStep_Into_triggered(); break;
        case 161: _t->on_actionStep_Out_triggered(); break;
        case 162: _t->on_actionRun_To_Cursor_triggered(); break;
        case 163: _t->on_actionContinue_triggered(); break;
        case 164: _t->on_actionAdd_Watch_triggered(); break;
        case 165: _t->on_actionView_CPU_Window_triggered(); break;
        case 166: _t->on_actionExit_triggered(); break;
        case 167: _t->on_actionFind_triggered(); break;
        case 168: _t->on_actionFind_in_files_triggered(); break;
        case 169: _t->on_actionReplace_triggered(); break;
        case 170: _t->on_actionFind_Next_triggered(); break;
        case 171: _t->on_actionFind_Previous_triggered(); break;
        case 172: _t->on_cbSearchHistory_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 173: _t->on_btnSearchAgain_clicked(); break;
        case 174: _t->on_actionRemove_Watch_triggered(); break;
        case 175: _t->on_actionRemove_All_Watches_triggered(); break;
        case 176: _t->on_actionModify_Watch_triggered(); break;
        case 177: _t->on_actionReformat_Code_triggered(); break;
        case 178: _t->on_actionBack_triggered(); break;
        case 179: _t->on_actionForward_triggered(); break;
        case 180: _t->on_tabExplorer_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 181: _t->on_EditorTabsLeft_tabBarDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 182: _t->on_EditorTabsRight_tabBarDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 183: _t->on_actionClose_triggered(); break;
        case 184: _t->on_actionClose_All_triggered(); break;
        case 185: _t->on_actionMaximize_Editor_triggered(); break;
        case 186: _t->on_actionNext_Editor_triggered(); break;
        case 187: _t->on_actionPrevious_Editor_triggered(); break;
        case 188: _t->on_actionToggle_Breakpoint_triggered(); break;
        case 189: _t->on_actionClear_all_breakpoints_triggered(); break;
        case 190: _t->on_actionBreakpoint_property_triggered(); break;
        case 191: _t->on_actionGoto_Declaration_triggered(); break;
        case 192: _t->on_actionGoto_Definition_triggered(); break;
        case 193: _t->on_actionFind_references_triggered(); break;
        case 194: _t->on_actionOpen_Containing_Folder_triggered(); break;
        case 195: _t->on_actionOpen_Terminal_triggered(); break;
        case 196: _t->on_actionFile_Properties_triggered(); break;
        case 197: _t->on_searchView_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 198: _t->on_tblStackTrace_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 199: _t->on_tblBreakpoints_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 200: _t->on_projectView_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 201: _t->on_actionClose_Project_triggered(); break;
        case 202: _t->on_actionProject_options_triggered(); break;
        case 203: _t->on_actionNew_Project_triggered(); break;
        case 204: _t->on_actionSaveAll_triggered(); break;
        case 205: _t->on_actionProject_New_File_triggered(); break;
        case 206: _t->on_actionAdd_to_project_triggered(); break;
        case 207: _t->on_actionRemove_from_project_triggered(); break;
        case 208: _t->on_actionView_Makefile_triggered(); break;
        case 209: _t->on_actionMakeClean_triggered(); break;
        case 210: _t->on_actionProject_Open_Folder_In_Explorer_triggered(); break;
        case 211: _t->on_actionProject_Open_In_Terminal_triggered(); break;
        case 212: _t->on_classBrowser_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 213: _t->on_EditorTabsLeft_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 214: _t->on_EditorTabsRight_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 215: _t->on_tableTODO_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 216: _t->on_actionAbout_triggered(); break;
        case 217: _t->on_actionRename_Symbol_triggered(); break;
        case 218: _t->on_btnReplace_clicked(); break;
        case 219: _t->on_btnCancelReplace_clicked(); break;
        case 220: _t->on_actionPrint_triggered(); break;
        case 221: _t->on_actionExport_As_RTF_triggered(); break;
        case 222: _t->on_actionExport_As_HTML_triggered(); break;
        case 223: _t->on_actionMove_To_Other_View_triggered(); break;
        case 224: _t->on_actionC_C_Reference_triggered(); break;
        case 225: _t->on_actionEGE_Manual_triggered(); break;
        case 226: _t->on_tableBookmark_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 227: _t->on_actionModify_Bookmark_Description_triggered(); break;
        case 228: _t->on_actionLocate_in_Files_View_triggered(); break;
        case 229: _t->on_treeFiles_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 230: _t->on_actionOpen_Folder_triggered(); break;
        case 231: _t->on_actionRun_Parameters_triggered(); break;
        case 232: _t->onAddProblem(); break;
        case 233: _t->onRemoveProblem(); break;
        case 234: _t->onSaveProblemSet(); break;
        case 235: _t->onLoadProblemSet(); break;
        case 236: _t->onAddProblemCase(); break;
        case 237: _t->onProblemRunAllCases(); break;
        case 238: _t->on_actionC_Reference_triggered(); break;
        case 239: _t->onRemoveProblemCases(); break;
        case 240: _t->onOpenProblemAnswerFile(); break;
        case 241: _t->on_actionTool_Window_Bars_triggered(); break;
        case 242: _t->on_actionStatus_Bar_triggered(); break;
        case 243: _t->on_actionProject_triggered(); break;
        case 244: _t->on_actionWatch_triggered(); break;
        case 245: _t->on_actionStructure_triggered(); break;
        case 246: _t->on_actionFiles_triggered(); break;
        case 247: _t->on_actionProblem_Set_triggered(); break;
        case 248: _t->on_actionIssues_triggered(); break;
        case 249: _t->on_actionTools_Output_triggered(); break;
        case 250: _t->on_actionDebug_Window_triggered(); break;
        case 251: _t->on_actionSearch_triggered(); break;
        case 252: _t->on_actionTODO_triggered(); break;
        case 253: _t->on_actionBookmark_triggered(); break;
        case 254: _t->on_actionProblem_triggered(); break;
        case 255: _t->on_actionDelete_Line_triggered(); break;
        case 256: _t->on_actionDuplicate_Line_triggered(); break;
        case 257: _t->on_actionDelete_Word_triggered(); break;
        case 258: _t->on_actionDelete_to_EOL_triggered(); break;
        case 259: _t->on_actionDelete_to_BOL_triggered(); break;
        case 260: _t->onOpenCaseValidationOptions(); break;
        case 261: _t->on_actionInterrupt_triggered(); break;
        case 262: _t->on_actionDelete_Last_Word_triggered(); break;
        case 263: _t->on_actionDelete_to_Word_End_triggered(); break;
        case 264: _t->on_actionNew_Class_triggered(); break;
        case 265: _t->on_actionNew_Header_triggered(); break;
        case 266: _t->on_actionWebsite_triggered(); break;
        case 267: _t->on_actionFilesView_Hide_Non_Support_Files_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 268: _t->on_actionToggle_Block_Comment_triggered(); break;
        case 269: _t->on_actionMatch_Bracket_triggered(); break;
        case 270: _t->on_btnProblemCaseInputFileName_clicked(); break;
        case 271: _t->on_btnProblemCaseClearExpectedOutputFileName_clicked(); break;
        case 272: _t->on_btnProblemCaseClearInputFileName_clicked(); break;
        case 273: _t->on_btnProblemCaseExpectedOutputFileName_clicked(); break;
        case 274: _t->on_txtProblemCaseOutput_cursorPositionChanged(); break;
        case 275: _t->on_txtProblemCaseExpected_cursorPositionChanged(); break;
        case 276: _t->on_txtProblemCaseInput_cursorPositionChanged(); break;
        case 277: _t->on_actionMove_Selection_Up_triggered(); break;
        case 278: _t->on_actionMove_Selection_Down_triggered(); break;
        case 279: _t->on_actionConvert_to_UTF_8_BOM_triggered(); break;
        case 280: _t->on_actionEncode_in_UTF_8_BOM_triggered(); break;
        case 281: _t->on_actionCompiler_Options_triggered(); break;
        case 282: _t->on_dockExplorer_dockLocationChanged((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetArea>>(_a[1]))); break;
        case 283: _t->on_dockMessages_dockLocationChanged((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetArea>>(_a[1]))); break;
        case 284: _t->on_actionToggle_Explorer_Panel_triggered(); break;
        case 285: _t->on_actionToggle_Messages_Panel_triggered(); break;
        case 286: _t->on_actionRaylib_Manual_triggered(); break;
        case 287: _t->on_actionSelect_Word_triggered(); break;
        case 288: _t->on_actionGo_to_Line_triggered(); break;
        case 289: _t->on_actionNew_Template_triggered(); break;
        case 290: _t->on_actionGoto_block_start_triggered(); break;
        case 291: _t->on_actionGoto_block_end_triggered(); break;
        case 292: _t->on_actionSwitchHeaderSource_triggered(); break;
        case 293: _t->on_actionGenerate_Assembly_triggered(); break;
        case 294: _t->onImportFPSProblemSet(); break;
        case 295: _t->on_actionTrim_trailing_spaces_triggered(); break;
        case 296: _t->onExportFPSProblemSet(); break;
        case 297: _t->on_actionToggle_Readonly_triggered(); break;
        case 298: _t->on_actionSubmit_Issues_triggered(); break;
        case 299: _t->on_actionDocument_triggered(); break;
        case 300: _t->on_actionNew_GAS_File_triggered(); break;
        case 301: _t->on_actionGNU_Assembler_Manual_triggered(); break;
        case 302: _t->on_actionAdd_Watchpoint_triggered(); break;
        case 303: _t->on_actionNew_Text_File_triggered(); break;
        case 304: _t->on_actionPage_Up_triggered(); break;
        case 305: _t->on_actionPage_Down_triggered(); break;
        case 306: _t->on_actionGoto_Line_Start_triggered(); break;
        case 307: _t->on_actionGoto_Line_End_triggered(); break;
        case 308: _t->on_actionGoto_File_Start_triggered(); break;
        case 309: _t->on_actionGoto_File_End_triggered(); break;
        case 310: _t->on_actionPage_Up_and_Select_triggered(); break;
        case 311: _t->on_actionPage_Down_and_Select_triggered(); break;
        case 312: _t->on_actionGoto_Page_Start_triggered(); break;
        case 313: _t->on_actionGoto_Page_End_triggered(); break;
        case 314: _t->on_actionGoto_Page_Start_and_Select_triggered(); break;
        case 315: _t->on_actionGoto_Page_End_and_Select_triggered(); break;
        case 316: _t->on_actionGoto_Line_Start_and_Select_triggered(); break;
        case 317: _t->on_actionGoto_Line_End_and_Select_triggered(); break;
        case 318: _t->on_actionGoto_File_Start_and_Select_triggered(); break;
        case 319: _t->on_actionGoto_File_End_and_Select_triggered(); break;
        case 320: _t->on_actionClose_Others_triggered(); break;
        case 321: _t->on_actionOI_Wiki_triggered(); break;
        case 322: _t->on_actionTurtle_Graphics_Manual_triggered(); break;
        case 323: _t->on_cbProblemCaseValidateType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 324: _t->on_actionToggle_Bookmark_triggered(); break;
        case 325: _t->on_actionCode_Completion_triggered(); break;
        case 326: _t->on_actionC_C_Header_triggered(); break;
        case 327: _t->on_actionText_File_triggered(); break;
        case 328: _t->on_actionC_File_triggered(); break;
        case 329: _t->on_actionCPP_File_triggered(); break;
        case 330: _t->on_actionATT_ASM_triggered(); break;
        case 331: _t->on_actionIntel_ASM_triggered(); break;
        case 332: _t->on_actionGenerate_GIMPLE_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< PCompileIssue >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTabWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10MainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 333)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 333;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 333)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 333;
    }
    return _id;
}
QT_WARNING_POP
