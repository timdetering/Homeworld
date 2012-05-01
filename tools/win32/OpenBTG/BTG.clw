; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAboutDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "BTG.h"
LastPage=0

ClassCount=9
Class1=CBTGApp
Class2=CBTGDoc
Class3=CBTGView
Class4=CMainFrame
Class9=CAboutDlg

ResourceCount=13
Resource1=IDR_MAINFRAME
Resource2=IDD_BTGVISIBLES
Resource8=IDD_BTGBITMAPS
Resource9=IDD_BTGBGCOLOUR
Resource10=IDD_BTGVPROPERTIESCTRL
Resource11=IDD_PAGE_SIZE
Resource12=IDD_ABOUTBOX
Resource13=IDD_DIALOG1

[CLS:CBTGApp]
Type=0
HeaderFile=BTG.h
ImplementationFile=BTG.cpp
Filter=N

[CLS:CBTGDoc]
Type=0
HeaderFile=BTGDoc.h
ImplementationFile=BTGDoc.cpp
Filter=N

[CLS:CBTGView]
Type=0
HeaderFile=BTGView.h
ImplementationFile=BTGView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=BTG.cpp
ImplementationFile=BTG.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_VIEW_TOOLBAR
Command12=ID_VIEW_STATUS_BAR
Command13=ID_VIEW_COLOR_CONTROL
Command14=ID_APP_ABOUT
Command15=ID_BTG_PAGE_SIZE
Command16=ID_BTG_LOAD_BACKGROUND
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_BTG_RESETZOOM
Command2=ID_BTG_TOGGLEBACKGROUND
Command3=ID_BTG_BRIGHTNESS
Command4=ID_BTG_CLEARSELECTED
Command5=ID_EDIT_COPY
Command6=ID_BTG_POLYMODE
Command7=ID_BTG_POLYMODE
Command8=ID_BTG_HIDESELECTED
Command9=ID_BTG_INVERTSEL
Command10=ID_BTG_LIGHTMODE
Command11=ID_BTG_MERGESELECTED
Command12=ID_FILE_NEW
Command13=ID_FILE_OPEN
Command14=ID_BTG_POLYCOUNT
Command15=ID_FILE_PRINT
Command16=ID_BTG_REFERENCEBGPIXEL
Command17=ID_EDIT_REDO
Command18=ID_BTG_STARMODE
Command19=ID_FILE_SAVE
Command20=ID_BTG_UNHIDEALL
Command21=ID_BTG_VERTEXMODE
Command22=ID_EDIT_PASTE
Command23=ID_BTG_ZOOMIN
Command24=ID_BTG_TOGGLESOLID
Command25=ID_EDIT_UNDO
Command26=ID_BTG_DELETESELECTED
Command27=ID_EDIT_CUT
Command28=ID_BTG_SCROLLUP
Command29=ID_NEXT_PANE
Command30=ID_PREV_PANE
Command31=ID_EDIT_COPY
Command32=ID_EDIT_PASTE
Command33=ID_BTG_SCROLLRIGHT
Command34=ID_BTG_SCROLLLEFT
Command35=ID_BTG_TOGGLEDRAWMODE
Command36=ID_BTG_ZOOMOUT
Command37=ID_BTG_SCROLLDOWN
Command38=ID_BTG_VERTEXMODE
Command39=ID_EDIT_CUT
Command40=ID_BTG_DELETESELECTED
Command41=ID_EDIT_UNDO
Command42=ID_BTG_PREVPOLYEDGE
Command43=ID_BTG_SUBPOLYEDGE
Command44=ID_BTG_NEXTPOLYEDGE
CommandCount=44

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_BTGVPROPERTIESCTRL]
Type=1
Class=?
ControlCount=16
Control1=ID_REDSLIDER,msctls_trackbar32,1342242840
Control2=IDC_STATIC,static,1342308352
Control3=ID_GREENSLIDER,msctls_trackbar32,1342242840
Control4=IDC_STATIC,static,1342308352
Control5=ID_BLUESLIDER,msctls_trackbar32,1342242840
Control6=IDC_STATIC,static,1342308352
Control7=IDC_COLORPREVIEW,button,1342242827
Control8=ID_ALPHASLIDER2,msctls_trackbar32,1342242840
Control9=IDC_STATIC,static,1342308352
Control10=ID_BRIGHTNESSSLIDER,msctls_trackbar32,1342242840
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT1,edit,1350631424
Control13=IDC_EDIT2,edit,1350631424
Control14=IDC_EDIT3,edit,1350631424
Control15=IDC_EDIT4,edit,1350631424
Control16=IDC_EDIT5,edit,1350631424

[DLG:IDD_PAGE_SIZE]
Type=1
Class=?
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT1,edit,1350631552
Control6=IDC_EDIT2,edit,1350631552

[DLG:IDD_BTGVISIBLES]
Type=1
Class=?
ControlCount=3
Control1=IDC_CHECK2,button,1342242819
Control2=IDC_RADIO2,button,1342177289
Control3=IDC_RADIO3,button,1342177289

[DLG:IDD_BTGBITMAPS]
Type=1
Class=?
ControlCount=2
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_COMBO1,combobox,1344341249

[DLG:IDD_BTGBGCOLOUR]
Type=1
Class=?
ControlCount=12
Control1=ID_BGREDSLIDER,msctls_trackbar32,1342242840
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=ID_BGGREENSLIDER,msctls_trackbar32,1342242840
Control5=ID_BGBLUESLIDER,msctls_trackbar32,1342242840
Control6=IDC_STATIC,static,1342308352
Control7=IDC_EDIT3,edit,1350631424
Control8=IDC_EDIT2,edit,1350631424
Control9=IDC_EDIT1,edit,1350631424
Control10=ID_BGALPHASLIDER,msctls_trackbar32,1342242840
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT4,edit,1350631424

[DLG:IDD_DIALOG1]
Type=1
Class=?
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

