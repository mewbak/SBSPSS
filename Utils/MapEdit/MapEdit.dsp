# Microsoft Developer Studio Project File - Name="MapEdit" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=MapEdit - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "MapEdit.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "MapEdit.mak" CFG="MapEdit - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "MapEdit - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "MapEdit - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "MapEdit - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\GinLib" /I "..\glibdev\glib\include" /I "..\glibdev\glib\include\pc" /I "..\ginlib" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 opengl32.lib glu32.lib win32lib.lib ginlib.lib glaux.lib /nologo /subsystem:windows /machine:I386 /libpath:"..\ginlib\release\\" /libpath:"..\GlibDev\glib\LIB\win32lib\release\\"

!ELSEIF  "$(CFG)" == "MapEdit - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\GinLib" /I "..\glibdev\glib\include" /I "..\glibdev\glib\include\pc" /I "..\ginlib" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 opengl32.lib glu32.lib win32lib.lib ginlib.lib glaux.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept /libpath:"..\ginlib\debug\\" /libpath:"..\GlibDev\glib\LIB\win32lib\debug\\"

!ENDIF 

# Begin Target

# Name "MapEdit - Win32 Release"
# Name "MapEdit - Win32 Debug"
# Begin Group "MapEditor"

# PROP Default_Filter ""
# Begin Group "Layers"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Layer.cpp
# End Source File
# Begin Source File

SOURCE=.\Layer.h
# End Source File
# Begin Source File

SOURCE=.\LayerTile.cpp
# End Source File
# Begin Source File

SOURCE=.\LayerTile.h
# End Source File
# End Group
# Begin Group "Export"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\Export.cpp
# End Source File
# Begin Source File

SOURCE=.\Export.h
# End Source File
# Begin Source File

SOURCE=.\ExportAGB.cpp
# End Source File
# Begin Source File

SOURCE=.\ExportAGB.h
# End Source File
# Begin Source File

SOURCE=.\ExportPSX.cpp
# End Source File
# Begin Source File

SOURCE=.\ExportPSX.h
# End Source File
# Begin Source File

SOURCE=.\ExportPSXHdr.h
# End Source File
# Begin Source File

SOURCE=.\Quantize.cpp
# End Source File
# Begin Source File

SOURCE=.\Quantize.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\Core.cpp
# End Source File
# Begin Source File

SOURCE=.\Core.h
# End Source File
# Begin Source File

SOURCE=.\Map.cpp
# End Source File
# Begin Source File

SOURCE=.\Map.h
# End Source File
# Begin Source File

SOURCE=.\TexCache.cpp
# End Source File
# Begin Source File

SOURCE=.\TexCache.h
# End Source File
# Begin Source File

SOURCE=.\Tile.cpp
# End Source File
# Begin Source File

SOURCE=.\Tile.h
# End Source File
# Begin Source File

SOURCE=.\TileSet.cpp
# End Source File
# Begin Source File

SOURCE=.\TileSet.h
# End Source File
# Begin Source File

SOURCE=.\utils.cpp
# End Source File
# Begin Source File

SOURCE=.\utils.h
# End Source File
# End Group
# Begin Group "Shell"

# PROP Default_Filter ""
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\ChildFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\GLEnabledView.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\MapEdit.cpp
# End Source File
# Begin Source File

SOURCE=.\MapEdit.rc
# End Source File
# Begin Source File

SOURCE=.\MapEditDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\MapEditView.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "*.h"
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\gl3d.h
# End Source File
# Begin Source File

SOURCE=.\GLEnabledView.h
# End Source File
# Begin Source File

SOURCE=.\List.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\MapEdit.h
# End Source File
# Begin Source File

SOURCE=.\MapEditDoc.h
# End Source File
# Begin Source File

SOURCE=.\MapEditView.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\ico00001.ico
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\MapEdit.ico
# End Source File
# Begin Source File

SOURCE=.\res\MapEdit.rc2
# End Source File
# Begin Source File

SOURCE=.\res\MapEditDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\mirrorx.ico
# End Source File
# Begin Source File

SOURCE=.\res\mirrory.ico
# End Source File
# Begin Source File

SOURCE=.\res\paint.ico
# End Source File
# Begin Source File

SOURCE=.\res\paint1.ico
# End Source File
# Begin Source File

SOURCE=.\res\paint2.ico
# End Source File
# Begin Source File

SOURCE=.\res\picker.ico
# End Source File
# Begin Source File

SOURCE=.\res\select.ico
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# End Group
# Begin Group "Dlg"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\LayerList.cpp
# End Source File
# Begin Source File

SOURCE=.\LayerList.h
# End Source File
# Begin Source File

SOURCE=.\LayerTileGUI.cpp
# End Source File
# Begin Source File

SOURCE=.\LayerTileGUI.h
# End Source File
# Begin Source File

SOURCE=.\MapSizeDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\MapSizeDlg.h
# End Source File
# Begin Source File

SOURCE=.\MultiBar.cpp
# End Source File
# Begin Source File

SOURCE=.\MultiBar.h
# End Source File
# Begin Source File

SOURCE=.\NewMapGUI.cpp
# End Source File
# Begin Source File

SOURCE=.\NewMapGUI.h
# End Source File
# End Group
# End Group
# End Target
# End Project
