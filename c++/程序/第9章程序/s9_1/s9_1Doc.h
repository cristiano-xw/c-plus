// s9_1Doc.h : interface of the CS9_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_S9_1DOC_H__D3B5B2A0_7A29_43CA_92B0_8ACE4D406C6F__INCLUDED_)
#define AFX_S9_1DOC_H__D3B5B2A0_7A29_43CA_92B0_8ACE4D406C6F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CS9_1Doc : public CDocument
{
protected: // create from serialization only
	CS9_1Doc();
	DECLARE_DYNCREATE(CS9_1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CS9_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CS9_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CS9_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_S9_1DOC_H__D3B5B2A0_7A29_43CA_92B0_8ACE4D406C6F__INCLUDED_)
