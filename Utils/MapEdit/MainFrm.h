// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__CEC14D79_A1F2_4281_AA53_544F0924E7D8__INCLUDED_)
#define AFX_MAINFRM_H__CEC14D79_A1F2_4281_AA53_544F0924E7D8__INCLUDED_

#include	"MultiBar.h"
#include	"LayerList.h"
#include	"TileSetDlg.h"
#include	"GfxToolBar.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
class CMainToolBar : public CToolBar
{
public:
	CMainToolBar(){};
	~CMainToolBar(){};
	CComboBox m_Combo;
};

/////////////////////////////////////////////////////////////////////////////
class CMainFrame : public CMDIFrameWnd
{
	DECLARE_DYNAMIC(CMainFrame)
public:
	CMainFrame();

// Attributes
public:
	CStatusBar		*GetStatusBar()			{return(&StatusBar);}
	CMainToolBar	*GetToolBar()			{return(&ToolBar);}
	CDialog			*GetDialog(int ID)		{return(ParamBar.GetDialog(ID));}

// Param Bar
	CMultiBar		*GetParamBar()			{return(&ParamBar);}
	CDialog			&GetLayerList()			{return(LayerList);}
	CDialog			&GetTileSetDlg()		{return(TileSetDlg);}
	CDialog			&GetGfxToolBar()		{return(GfxToolBar);}		
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar		StatusBar;
	CMainToolBar	ToolBar;

	CMultiBar		ParamBar;
// Sub Dialogs
	CLayerList		LayerList;
	CTileSetDlg		TileSetDlg;
	CGfxToolBar		GfxToolBar;
// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

enum	STATUS_BAR_ENUM
{
STATUS_BAR_SEP=0,
STATUS_BAR_XPOS,
STATUS_BAR_YPOS,
};


/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__CEC14D79_A1F2_4281_AA53_544F0924E7D8__INCLUDED_)
