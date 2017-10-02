// Mainframe macro generated from application: /home/tatsuya/root/v5.34.07/bin/root.exe

// By ROOT version 5.34/07 on 2015-04-15 14:45:15
//const int timeoffset = -789004800;
const int timeoffset = -788918400

#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGColorDialog
#include "TGColorDialog.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGFontDialog
#include "TGFontDialog.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGProgressBar
#include "TGProgressBar.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGListTree
#include "TGListTree.h"
#endif
#ifndef ROOT_TGuiBldGeometryFrame
#include "TGuiBldGeometryFrame.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TRootEmbeddedCanvas
#include "TRootEmbeddedCanvas.h"
#endif
#ifndef ROOT_TCanvas
#include "TCanvas.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#ifndef ROOT_TGObject
#include "TGObject.h"
#endif

#include "Riostream.h"

#include <TGraph.h>
#include <TROOT.h>
#include <TApplication.h>
#include <TGClient.h>
#include <TAxis.h>
#include <TStyle.h>
#include <TRootEmbeddedCanvas.h>

#include "maikodev.h"

MainFrame::MainFrame(){

   // main frame
   TGMainFrame *fMainFrame1363 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame1363->SetName("fMainFrame1363");
   fMainFrame1363->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1732 = new TGCompositeFrame(fMainFrame1363,983,677,kVerticalFrame);
   fMainFrame1732->SetName("fMainFrame1732");
   fMainFrame1732->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1102 = new TGCompositeFrame(fMainFrame1732,985,681,kVerticalFrame);
   fMainFrame1102->SetName("fMainFrame1102");
   fMainFrame1102->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame945 = new TGCompositeFrame(fMainFrame1102,988,728,kVerticalFrame);
   fMainFrame945->SetName("fMainFrame945");
   fMainFrame945->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1351 = new TGCompositeFrame(fMainFrame945,988,652,kVerticalFrame);
   fMainFrame1351->SetName("fMainFrame1351");
   fMainFrame1351->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1751 = new TGCompositeFrame(fMainFrame1351,989,736,kVerticalFrame);
   fMainFrame1751->SetName("fMainFrame1751");
   fMainFrame1751->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1575 = new TGCompositeFrame(fMainFrame1751,997,741,kVerticalFrame);
   fMainFrame1575->SetName("fMainFrame1575");
   fMainFrame1575->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1420 = new TGCompositeFrame(fMainFrame1575,996,740,kVerticalFrame);
   fMainFrame1420->SetName("fMainFrame1420");
   fMainFrame1420->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame964 = new TGCompositeFrame(fMainFrame1420,994,737,kVerticalFrame);
   fMainFrame964->SetName("fMainFrame964");
   fMainFrame964->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1278 = new TGCompositeFrame(fMainFrame964,994,738,kVerticalFrame);
   fMainFrame1278->SetName("fMainFrame1278");
   fMainFrame1278->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1237 = new TGCompositeFrame(fMainFrame1278,999,739,kVerticalFrame);
   fMainFrame1237->SetName("fMainFrame1237");
   fMainFrame1237->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1160 = new TGCompositeFrame(fMainFrame1237,1000,741,kVerticalFrame);
   fMainFrame1160->SetName("fMainFrame1160");
   fMainFrame1160->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1709 = new TGCompositeFrame(fMainFrame1160,1003,750,kVerticalFrame);
   fMainFrame1709->SetName("fMainFrame1709");
   fMainFrame1709->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame854 = new TGCompositeFrame(fMainFrame1709,1002,755,kVerticalFrame);
   fMainFrame854->SetName("fMainFrame854");
   fMainFrame854->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame2320 = new TGCompositeFrame(fMainFrame854,1002,753,kVerticalFrame);
   fMainFrame2320->SetName("fMainFrame2320");
   fMainFrame2320->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1834 = new TGCompositeFrame(fMainFrame2320,1002,752,kVerticalFrame);
   fMainFrame1834->SetName("fMainFrame1834");
   fMainFrame1834->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame3424 = new TGCompositeFrame(fMainFrame1834,1004,751,kVerticalFrame);
   fMainFrame3424->SetName("fMainFrame3424");
   fMainFrame3424->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1932 = new TGCompositeFrame(fMainFrame3424,1063,763,kVerticalFrame);
   fMainFrame1932->SetName("fMainFrame1932");
   fMainFrame1932->SetLayoutBroken(kTRUE);

   // composite frame
   TGCompositeFrame *fMainFrame1139 = new TGCompositeFrame(fMainFrame1932,1064,769,kVerticalFrame);
   fMainFrame1139->SetName("fMainFrame1139");
   fMainFrame1139->SetLayoutBroken(kTRUE);

   // tab widget
   TGTab *fTab693 = new TGTab(fMainFrame1139,1062,767);

   // container of "Pressure"
   TGCompositeFrame *fCompositeFrame696;
   fCompositeFrame696 = fTab693->AddTab("Pressure");
   fCompositeFrame696->SetLayoutManager(new TGVerticalLayout(fCompositeFrame696));
   fCompositeFrame696->SetLayoutBroken(kTRUE);

   TGFont *ufont;         // will reflect user font changes
   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   TGGC   *uGC;           // will reflect user GC changes
   // graphics context changes
   GCValues_t valEntry697;
   valEntry697.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry697.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry697.fBackground);
   valEntry697.fFillStyle = kFillSolid;
   valEntry697.fFont = ufont->GetFontHandle();
   valEntry697.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry697, kTRUE);

   //   TGTextEntry *fTextEntry697 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry697 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry697->SetMaxLength(4096);
   fTextEntry697->SetAlignment(kTextLeft);
   fTextEntry697->SetText("/home/pi/maikodev/data/20171004.dat");
   fTextEntry697->Resize(264,fTextEntry697->GetDefaultHeight());
   fCompositeFrame696->AddFrame(fTextEntry697, new TGLayoutHints(kLHintsRight | kLHintsTop,2,200,100,2));
   fTextEntry697->MoveResize(594,53,264,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry698;
   valEntry698.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry698.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry698.fBackground);
   valEntry698.fFillStyle = kFillSolid;
   valEntry698.fFont = ufont->GetFontHandle();
   valEntry698.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry698, kTRUE);

   //   TGTextEntry *fTextEntry698 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry698 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry698->SetMaxLength(4096);
   fTextEntry698->SetAlignment(kTextLeft);
   fTextEntry698->SetText("/home/pi/maikodev/data/20171004.dat");
   fTextEntry698->Resize(264,fTextEntry698->GetDefaultHeight());
   fCompositeFrame696->AddFrame(fTextEntry698, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry698->MoveResize(592,221,264,22);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton699;
   valButton699.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton699.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton699.fBackground);
   valButton699.fFillStyle = kFillSolid;
   valButton699.fFont = ufont->GetFontHandle();
   valButton699.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton699, kTRUE);
   TGTextButton *fTextButton699 = new TGTextButton(fCompositeFrame696,"Record",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton699->SetTextJustify(36);
   fTextButton699->SetMargins(0,0,0,0);
   fTextButton699->SetWrapLength(-1);
   fTextButton699->Resize(92,24);
   fCompositeFrame696->AddFrame(fTextButton699, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton699->MoveResize(888,52,92,24);
   fTextButton699->Connect("Clicked()", "MainFrame", this, "Record()");

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton700;
   valButton700.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton700.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton700.fBackground);
   valButton700.fFillStyle = kFillSolid;
   valButton700.fFont = ufont->GetFontHandle();
   valButton700.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton700, kTRUE);
   TGTextButton *fTextButton700 = new TGTextButton(fCompositeFrame696,"Plot",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton700->SetTextJustify(36);
   fTextButton700->SetMargins(0,0,0,0);
   fTextButton700->SetWrapLength(-1);
   fTextButton700->Resize(92,24);
   fCompositeFrame696->AddFrame(fTextButton700, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton700->MoveResize(888,219,92,24);
   fTextButton700->Connect("Clicked()", "MainFrame", this, "Plot()");

   // embedded canvas
   TRootEmbeddedCanvas *fRootEmbeddedCanvas701 = new TRootEmbeddedCanvas(0,fCompositeFrame696,568,616);
   Int_t wfRootEmbeddedCanvas701 = fRootEmbeddedCanvas701->GetCanvasWindowId();

   //   TCanvas *c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas701);
   c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas701);
   fRootEmbeddedCanvas701->AdoptCanvas(c123);
   fCompositeFrame696->AddFrame(fRootEmbeddedCanvas701, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fRootEmbeddedCanvas701->MoveResize(16,24,568,616);
   TGLabel *fLabel714 = new TGLabel(fCompositeFrame696,"Record file name");
   fLabel714->SetTextJustify(36);
   fLabel714->SetMargins(0,0,0,0);
   fLabel714->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel714, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel714->MoveResize(597,33,96,18);
   TGLabel *fLabel715 = new TGLabel(fCompositeFrame696,"Plot file name");
   fLabel715->SetTextJustify(36);
   fLabel715->SetMargins(0,0,0,0);
   fLabel715->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel715, new TGLayoutHints(kLHintsNormal));
   fLabel715->MoveResize(597,199,80,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
// GCValues_t valEntry716;
// valEntry716.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
// gClient->GetColorByName("#000000",valEntry716.fForeground);
// gClient->GetColorByName("#e0e0e0",valEntry716.fBackground);
// valEntry716.fFillStyle = kFillSolid;
// valEntry716.fFont = ufont->GetFontHandle();
// valEntry716.fGraphicsExposures = kFALSE;
// uGC = gClient->GetGC(&valEntry716, kTRUE);

   //   TGTextEntry *fTextEntry716 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   //   fTextEntry716 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   //   fTextEntry716->SetMaxLength(4096);
   //   fTextEntry716->SetAlignment(kTextLeft);
   //   fTextEntry716->SetText("RI1C2250");
   //   fTextEntry716->Resize(93,fTextEntry716->GetDefaultHeight());
   //   fCompositeFrame696->AddFrame(fTextEntry716, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   //   fTextEntry716->MoveResize(100,680,93,22);

   TGPictureButton *fPictureButton718 = new TGPictureButton(fCompositeFrame696,gClient->GetPicture("/home/pi/maikodev/pic/kuma.png"));
   fCompositeFrame696->AddFrame(fPictureButton718, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fPictureButton718->MoveResize(848,472,104,144);
   fPictureButton718->SetCommand("gApplication->Terminate()");

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry719;
   valEntry719.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry719.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry719.fBackground);
   valEntry719.fFillStyle = kFillSolid;
   valEntry719.fFont = ufont->GetFontHandle();
   valEntry719.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry719, kTRUE);

   //   TGTextEntry *fTextEntry719 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry719 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry719->SetMaxLength(4096);
   fTextEntry719->SetAlignment(kTextRight);
   fTextEntry719->SetText("60");
   fTextEntry719->Resize(86,fTextEntry719->GetDefaultHeight());
   fCompositeFrame696->AddFrame(fTextEntry719, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry719->MoveResize(594,113,86,22);

   TGLabel *fLabel720 = new TGLabel(fCompositeFrame696,"Record interval");
   fLabel720->SetTextJustify(36);
   fLabel720->SetMargins(0,0,0,0);
   fLabel720->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel720, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel720->MoveResize(592,93,96,18);

   TGLabel *fLabel721 = new TGLabel(fCompositeFrame696,"seconds");
   fLabel721->SetTextJustify(36);
   fLabel721->SetMargins(0,0,0,0);
   fLabel721->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel721, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel721->MoveResize(685,116,48,18);

   ULong_t ucolor;        // will reflect user color changes
   gClient->GetColorByName("#ffffff",ucolor);

   // combo box
   //   TGComboBox *fComboBox722 = new TGComboBox(fCompositeFrame696,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
   fComboBox722 = new TGComboBox(fCompositeFrame696,-1,kHorizontalFrame | kSunkenFrame | kDoubleBorder | kOwnBackground);
   fComboBox722->AddEntry("Pressure",1);
   fComboBox722->AddEntry("Temperature",2);
   fComboBox722->AddEntry("Density",3);
   fComboBox722->AddEntry("Dew Point (deg)",4);
   fComboBox722->AddEntry("Dew Point (ppm)",5);
   fComboBox722->AddEntry("Flow 1 (cc/min)",6);
   fComboBox722->AddEntry("Flow 2 (cc/min)",7);
   fComboBox722->Resize(144,22);
   fComboBox722->Select(1);
   fCompositeFrame696->AddFrame(fComboBox722, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fComboBox722->MoveResize(592,281,144,22);
   TGLabel *fLabel738 = new TGLabel(fCompositeFrame696,"Plot object");
   fLabel738->SetTextJustify(36);
   fLabel738->SetMargins(0,0,0,0);
   fLabel738->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel738, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel738->MoveResize(592,260,80,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry739;
   valEntry739.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry739.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry739.fBackground);
   valEntry739.fFillStyle = kFillSolid;
   valEntry739.fFont = ufont->GetFontHandle();
   valEntry739.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry739, kTRUE);

   TGTextEntry *fTextEntry739 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry739 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry739->SetMaxLength(4096);
   fTextEntry739->SetAlignment(kTextRight);
   fTextEntry739->SetText("600");
   fTextEntry739->Resize(86,fTextEntry739->GetDefaultHeight());
   fCompositeFrame696->AddFrame(fTextEntry739, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry739->MoveResize(592,380,86,22);

   TGLabel *fLabel740 = new TGLabel(fCompositeFrame696,"Interlock");
   fLabel740->SetTextJustify(36);
   fLabel740->SetMargins(0,0,0,0);
   fLabel740->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel740, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel740->MoveResize(594,360,80,18);

   TGLabel *fLabel741 = new TGLabel(fCompositeFrame696,"hPa");
   fLabel741->SetTextJustify(36);
   fLabel741->SetMargins(0,0,0,0);
   fLabel741->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel741, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel741->MoveResize(680,382,48,18);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton742;
   valButton742.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton742.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton742.fBackground);
   valButton742.fFillStyle = kFillSolid;
   valButton742.fFont = ufont->GetFontHandle();
   valButton742.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton742, kTRUE);
   TGTextButton *fTextButton742 = new TGTextButton(fCompositeFrame696,"Start",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton742->SetTextJustify(36);
   fTextButton742->SetMargins(0,0,0,0);
   fTextButton742->SetWrapLength(-1);
   fTextButton742->Resize(92,24);
   fCompositeFrame696->AddFrame(fTextButton742, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton742->MoveResize(753,380,92,24);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton743;
   valButton743.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#ff0000",valButton743.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton743.fBackground);
   valButton743.fFillStyle = kFillSolid;
   valButton743.fFont = ufont->GetFontHandle();
   valButton743.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton743, kTRUE);
   TGTextButton *fTextButton743 = new TGTextButton(fCompositeFrame696,"Stop",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton743->SetTextJustify(36);
   fTextButton743->SetMargins(0,0,0,0);
   fTextButton743->SetWrapLength(-1);
   fTextButton743->Resize(92,24);
   fCompositeFrame696->AddFrame(fTextButton743, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton743->MoveResize(887,380,92,24);
   TGHorizontal3DLine *fHorizontal3DLine744 = new TGHorizontal3DLine(fCompositeFrame696,392,8);
   fCompositeFrame696->AddFrame(fHorizontal3DLine744, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fHorizontal3DLine744->MoveResize(591,168,392,8);
   TGHorizontal3DLine *fHorizontal3DLine745 = new TGHorizontal3DLine(fCompositeFrame696,392,8);
   fCompositeFrame696->AddFrame(fHorizontal3DLine745, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fHorizontal3DLine745->MoveResize(591,331,392,8);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry746;
   valEntry746.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry746.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry746.fBackground);
   valEntry746.fFillStyle = kFillSolid;
   valEntry746.fFont = ufont->GetFontHandle();
   valEntry746.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry746, kTRUE);

   //   TGTextEntry *fTextEntry746 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry746 = new TGTextEntry(fCompositeFrame696, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry746->SetMaxLength(4096);
   fTextEntry746->SetAlignment(kTextLeft);
   fTextEntry746->SetText("RI1C2250");
   fTextEntry746->Resize(72,fTextEntry746->GetDefaultHeight());
   fCompositeFrame696->AddFrame(fTextEntry746, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry746->MoveResize(592,528,72,22);

   TGTextButton *fTextButton747 = new TGTextButton(fCompositeFrame696,"Print");
   fTextButton747->SetTextJustify(36);
   fTextButton747->SetMargins(0,0,0,0);
   fTextButton747->SetWrapLength(-1);
   fTextButton747->Resize(92,24);
   fCompositeFrame696->AddFrame(fTextButton747, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton747->MoveResize(696,528,92,24);
   fTextButton747->Connect("Clicked()", "MainFrame", this, "Print()");

   TGLabel *fLabel748 = new TGLabel(fCompositeFrame696,"Printer Name");
   fLabel748->SetTextJustify(36);
   fLabel748->SetMargins(0,0,0,0);
   fLabel748->SetWrapLength(-1);
   fCompositeFrame696->AddFrame(fLabel748, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel748->MoveResize(587,509,80,18);


   // container of "Iwaki"
   TGCompositeFrame *fCompositeFrame750;
   fCompositeFrame750 = fTab693->AddTab("Iwaki");
   fCompositeFrame750->SetLayoutManager(new TGVerticalLayout(fCompositeFrame750));
   fCompositeFrame750->SetLayoutBroken(kTRUE);

   // "Thresholds" group frame
   TGGroupFrame *fGroupFrame751 = new TGGroupFrame(fCompositeFrame750,"Thresholds");
   fGroupFrame751->SetLayoutBroken(kTRUE);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry752;
   valEntry752.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry752.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry752.fBackground);
   valEntry752.fFillStyle = kFillSolid;
   valEntry752.fFont = ufont->GetFontHandle();
   valEntry752.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry752, kTRUE);

   //   TGTextEntry *fTextEntry752 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry752 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry752->SetMaxLength(4096);
   fTextEntry752->SetAlignment(kTextRight);
   fTextEntry752->SetText("0");
   fTextEntry752->Resize(70,fTextEntry752->GetDefaultHeight());
   fGroupFrame751->AddFrame(fTextEntry752, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry752->MoveResize(50,60,70,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry753;
   valEntry753.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry753.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry753.fBackground);
   valEntry753.fFillStyle = kFillSolid;
   valEntry753.fFont = ufont->GetFontHandle();
   valEntry753.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry753, kTRUE);

   //   TGTextEntry *fTextEntry753 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry753 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry753->SetMaxLength(4096);
   fTextEntry753->SetAlignment(kTextRight);
   fTextEntry753->SetText("0");
   fTextEntry753->Resize(70,fTextEntry753->GetDefaultHeight());
   fGroupFrame751->AddFrame(fTextEntry753, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry753->MoveResize(250,60,70,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry754;
   valEntry754.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry754.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry754.fBackground);
   valEntry754.fFillStyle = kFillSolid;
   valEntry754.fFont = ufont->GetFontHandle();
   valEntry754.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry754, kTRUE);

   //   TGTextEntry *fTextEntry754 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry754 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry754->SetMaxLength(4096);
   fTextEntry754->SetAlignment(kTextRight);
   fTextEntry754->SetText("0");
   fTextEntry754->Resize(70,fTextEntry754->GetDefaultHeight());
   fGroupFrame751->AddFrame(fTextEntry754, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry754->MoveResize(450,60,70,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry755;
   valEntry755.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry755.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry755.fBackground);
   valEntry755.fFillStyle = kFillSolid;
   valEntry755.fFont = ufont->GetFontHandle();
   valEntry755.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry755, kTRUE);

   //   TGTextEntry *fTextEntry755 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry755 = new TGTextEntry(fGroupFrame751, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry755->SetMaxLength(4096);
   fTextEntry755->SetAlignment(kTextRight);
   fTextEntry755->SetText("0");
   fTextEntry755->Resize(70,fTextEntry755->GetDefaultHeight());
   fGroupFrame751->AddFrame(fTextEntry755, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry755->MoveResize(650,60,70,22);
   TGLabel *fLabel756 = new TGLabel(fGroupFrame751,"anode1");
   fLabel756->SetTextJustify(36);
   fLabel756->SetMargins(0,0,0,0);
   fLabel756->SetWrapLength(-1);
   fGroupFrame751->AddFrame(fLabel756, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel756->MoveResize(60,40,56,18);
   TGLabel *fLabel757 = new TGLabel(fGroupFrame751,"anode2");
   fLabel757->SetTextJustify(36);
   fLabel757->SetMargins(0,0,0,0);
   fLabel757->SetWrapLength(-1);
   fGroupFrame751->AddFrame(fLabel757, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel757->MoveResize(259,40,56,18);
   TGLabel *fLabel758 = new TGLabel(fGroupFrame751,"cathode1");
   fLabel758->SetTextJustify(36);
   fLabel758->SetMargins(0,0,0,0);
   fLabel758->SetWrapLength(-1);
   fGroupFrame751->AddFrame(fLabel758, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel758->MoveResize(458,40,56,18);
   TGLabel *fLabel759 = new TGLabel(fGroupFrame751,"cathode2");
   fLabel759->SetTextJustify(36);
   fLabel759->SetMargins(0,0,0,0);
   fLabel759->SetWrapLength(-1);
   fGroupFrame751->AddFrame(fLabel759, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel759->MoveResize(658,40,56,18);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton760;
   valButton760.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton760.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton760.fBackground);
   valButton760.fFillStyle = kFillSolid;
   valButton760.fFont = ufont->GetFontHandle();
   valButton760.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton760, kTRUE);
   TGTextButton *fTextButton760 = new TGTextButton(fGroupFrame751,"Set thresholds",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton760->SetTextJustify(36);
   fTextButton760->SetMargins(0,0,0,0);
   fTextButton760->SetWrapLength(-1);
   fTextButton760->Resize(136,22);
   fGroupFrame751->AddFrame(fTextButton760, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton760->MoveResize(318,104,136,22);

   fGroupFrame751->SetLayoutManager(new TGVerticalLayout(fGroupFrame751));
   fGroupFrame751->Resize(777,160);
   fCompositeFrame750->AddFrame(fGroupFrame751, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fGroupFrame751->MoveResize(100,323,777,160);
   TGPictureButton *fPictureButton761 = new TGPictureButton(fCompositeFrame750,gClient->GetPicture("/home/pi/maikodev/pic/kuma2.png"));
   fCompositeFrame750->AddFrame(fPictureButton761, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fPictureButton761->MoveResize(437,500,96,112);
   fPictureButton761->SetCommand("gApplication->Terminate()");

   // "Connection check" group frame
   TGGroupFrame *fGroupFrame762 = new TGGroupFrame(fCompositeFrame750,"Connection check");
   fGroupFrame762->SetLayoutBroken(kTRUE);

   gClient->GetColorByName("#000000",ucolor);
   TGLabel *fLabel763 = new TGLabel(fGroupFrame762,"anode1",TGLabel::GetDefaultGC()(),TGLabel::GetDefaultFontStruct(),kChildFrame,ucolor);
   fLabel763->SetTextJustify(36);
   fLabel763->SetMargins(0,0,0,0);
   fLabel763->SetWrapLength(-1);
   fGroupFrame762->AddFrame(fLabel763, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel763->MoveResize(60,40,56,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t vall764;
   vall764.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",vall764.fForeground);
   gClient->GetColorByName("#e0e0e0",vall764.fBackground);
   vall764.fFillStyle = kFillSolid;
   vall764.fFont = ufont->GetFontHandle();
   vall764.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall764, kTRUE);

   gClient->GetColorByName("#ff6666",ucolor);
   TGLabel *fLabel764 = new TGLabel(fGroupFrame762,"anode2",uGC->GetGC(),ufont->GetFontStruct(),kChildFrame,ucolor);
   fLabel764->SetTextJustify(36);
   fLabel764->SetMargins(0,0,0,0);
   fLabel764->SetWrapLength(-1);
   fGroupFrame762->AddFrame(fLabel764, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel764->MoveResize(259,40,56,18);
   TGLabel *fLabel765 = new TGLabel(fGroupFrame762,"cathode1");
   fLabel765->SetTextJustify(36);
   fLabel765->SetMargins(0,0,0,0);
   fLabel765->SetWrapLength(-1);
   fGroupFrame762->AddFrame(fLabel765, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel765->MoveResize(458,40,56,18);
   TGLabel *fLabel766 = new TGLabel(fGroupFrame762,"cathode2");
   fLabel766->SetTextJustify(36);
   fLabel766->SetMargins(0,0,0,0);
   fLabel766->SetWrapLength(-1);
   fGroupFrame762->AddFrame(fLabel766, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel766->MoveResize(658,40,56,18);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton767;
   valButton767.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",valButton767.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton767.fBackground);
   valButton767.fFillStyle = kFillSolid;
   valButton767.fFont = ufont->GetFontHandle();
   valButton767.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton767, kTRUE);
   TGTextButton *fTextButton767 = new TGTextButton(fGroupFrame762,"Go!!",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton767->SetTextJustify(36);
   fTextButton767->SetMargins(0,0,0,0);
   fTextButton767->SetWrapLength(-1);
   fTextButton767->Resize(113,22);
   fGroupFrame762->AddFrame(fTextButton767, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton767->MoveResize(328,71,113,22);

   fGroupFrame762->SetLayoutManager(new TGVerticalLayout(fGroupFrame762));
   fGroupFrame762->Resize(777,120);
   fCompositeFrame750->AddFrame(fGroupFrame762, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fGroupFrame762->MoveResize(100,180,777,120);
   TGPictureButton *fPictureButton768 = new TGPictureButton(fCompositeFrame750,gClient->GetPicture("/home/pi/maikodev/pic/bone.png"));
   fCompositeFrame750->AddFrame(fPictureButton768, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fPictureButton768->MoveResize(424,56,120,104);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-17-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t vall769;
   vall769.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#ff0000",vall769.fForeground);
   gClient->GetColorByName("#e0e0e0",vall769.fBackground);
   vall769.fFillStyle = kFillSolid;
   vall769.fFont = ufont->GetFontHandle();
   vall769.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall769, kTRUE);
   TGLabel *fLabel769 = new TGLabel(fCompositeFrame750,"Reset Iwaki boards",uGC->GetGC(),ufont->GetFontStruct());
   fLabel769->SetTextJustify(36);
   fLabel769->SetMargins(0,0,0,0);
   fLabel769->SetWrapLength(-1);
   fCompositeFrame750->AddFrame(fLabel769, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel769->MoveResize(402,37,168,18);


   // container of "GEM_calc"
   TGCompositeFrame *fCompositeFrame771;
   fCompositeFrame771 = fTab693->AddTab("GEM_calc");
   fCompositeFrame771->SetLayoutManager(new TGVerticalLayout(fCompositeFrame771));
   fCompositeFrame771->SetLayoutBroken(kTRUE);

   // "For setting" group frame
   TGGroupFrame *fGroupFrame772 = new TGGroupFrame(fCompositeFrame771,"For setting");
   fGroupFrame772->SetLayoutBroken(kTRUE);

   //   TGNumberEntry *fNumberEntry773 = new TGNumberEntry(fGroupFrame772, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fNumberEntry773 = new TGNumberEntry(fGroupFrame772, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame772->AddFrame(fNumberEntry773, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntry773->MoveResize(30,50,59,22);

   //   TGNumberEntry *fNumberEntry777 = new TGNumberEntry(fGroupFrame772, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fNumberEntry777 = new TGNumberEntry(fGroupFrame772, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame772->AddFrame(fNumberEntry777, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntry777->MoveResize(30,90,59,22);

   TGLabel *fLabel781 = new TGLabel(fGroupFrame772,"TOP voltage (-V)");
   fLabel781->SetTextJustify(36);
   fLabel781->SetMargins(0,0,0,0);
   fLabel781->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel781, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel781->MoveResize(98,50,96,18);
   TGLabel *fLabel782 = new TGLabel(fGroupFrame772,"DOWN voltage (-V)");
   fLabel782->SetTextJustify(36);
   fLabel782->SetMargins(0,0,0,0);
   fLabel782->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel782, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel782->MoveResize(98,90,112,18);
   TGVertical3DLine *fVertical3DLine783 = new TGVertical3DLine(fGroupFrame772,8,144);
   fGroupFrame772->AddFrame(fVertical3DLine783, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fVertical3DLine783->MoveResize(256,16,8,144);

   ufont = gClient->GetFont("-*-times-medium-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t vall784;
   vall784.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",vall784.fForeground);
   gClient->GetColorByName("#e0e0e0",vall784.fBackground);
   vall784.fFillStyle = kFillSolid;
   vall784.fFont = ufont->GetFontHandle();
   vall784.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall784, kTRUE);
   TGLabel *fLabel784 = new TGLabel(fGroupFrame772,"Set value",uGC->GetGC(),ufont->GetFontStruct());
   fLabel784->SetTextJustify(36);
   fLabel784->SetMargins(0,0,0,0);
   fLabel784->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel784, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel784->MoveResize(15,20,64,18);

   ufont = gClient->GetFont("-*-times-medium-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t vall785;
   vall785.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",vall785.fForeground);
   gClient->GetColorByName("#e0e0e0",vall785.fBackground);
   vall785.fFillStyle = kFillSolid;
   vall785.fFont = ufont->GetFontHandle();
   vall785.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall785, kTRUE);
   TGLabel *fLabel785 = new TGLabel(fGroupFrame772,"Repic value",uGC->GetGC(),ufont->GetFontStruct());
   fLabel785->SetTextJustify(36);
   fLabel785->SetMargins(0,0,0,0);
   fLabel785->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel785, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel785->MoveResize(280,20,80,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry786;
   valEntry786.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry786.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry786.fBackground);
   valEntry786.fFillStyle = kFillSolid;
   valEntry786.fFont = ufont->GetFontHandle();
   valEntry786.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry786, kTRUE);

   //   TGTextEntry *fTextEntry786 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry786 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry786->SetMaxLength(4096);
   fTextEntry786->SetAlignment(kTextRight);
   fTextEntry786->SetText(" ");
   fTextEntry786->Resize(64,fTextEntry786->GetDefaultHeight());
   fGroupFrame772->AddFrame(fTextEntry786, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry786->MoveResize(290,50,64,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry787;
   valEntry787.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry787.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry787.fBackground);
   valEntry787.fFillStyle = kFillSolid;
   valEntry787.fFont = ufont->GetFontHandle();
   valEntry787.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry787, kTRUE);

   //   TGTextEntry *fTextEntry787 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry787 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry787->SetMaxLength(4096);
   fTextEntry787->SetAlignment(kTextRight);
   fTextEntry787->SetText(" ");
   fTextEntry787->Resize(64,fTextEntry787->GetDefaultHeight());
   fGroupFrame772->AddFrame(fTextEntry787, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry787->MoveResize(290,90,64,22);
   TGLabel *fLabel788 = new TGLabel(fGroupFrame772,"TOP (-V)");
   fLabel788->SetTextJustify(36);
   fLabel788->SetMargins(0,0,0,0);
   fLabel788->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel788, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel788->MoveResize(360,50,56,18);
   TGLabel *fLabel789 = new TGLabel(fGroupFrame772,"DOWN (-V)");
   fLabel789->SetTextJustify(36);
   fLabel789->SetMargins(0,0,0,0);
   fLabel789->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel789, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel789->MoveResize(360,90,72,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry790;
   valEntry790.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry790.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry790.fBackground);
   valEntry790.fFillStyle = kFillSolid;
   valEntry790.fFont = ufont->GetFontHandle();
   valEntry790.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry790, kTRUE);

   //   TGTextEntry *fTextEntry790 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry790 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry790->SetMaxLength(4096);
   fTextEntry790->SetAlignment(kTextRight);
   fTextEntry790->SetText(" ");
   fTextEntry790->Resize(64,fTextEntry790->GetDefaultHeight());
   fGroupFrame772->AddFrame(fTextEntry790, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry790->MoveResize(460,50,64,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry791;
   valEntry791.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry791.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry791.fBackground);
   valEntry791.fFillStyle = kFillSolid;
   valEntry791.fFont = ufont->GetFontHandle();
   valEntry791.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry791, kTRUE);

   //   TGTextEntry *fTextEntry791 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry791 = new TGTextEntry(fGroupFrame772, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry791->SetMaxLength(4096);
   fTextEntry791->SetAlignment(kTextRight);
   fTextEntry791->SetText(" ");
   fTextEntry791->Resize(64,fTextEntry791->GetDefaultHeight());
   fGroupFrame772->AddFrame(fTextEntry791, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry791->MoveResize(460,90,64,22);
   TGLabel *fLabel792 = new TGLabel(fGroupFrame772,"TOP current (uA)");
   fLabel792->SetTextJustify(36);
   fLabel792->SetMargins(0,0,0,0);
   fLabel792->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel792, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel792->MoveResize(530,50,96,18);
   TGLabel *fLabel793 = new TGLabel(fGroupFrame772,"DOWN current (uA)");
   fLabel793->SetTextJustify(36);
   fLabel793->SetMargins(0,0,0,0);
   fLabel793->SetWrapLength(-1);
   fGroupFrame772->AddFrame(fLabel793, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel793->MoveResize(530,90,112,18);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton794;
   valButton794.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#ff0000",valButton794.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton794.fBackground);
   valButton794.fFillStyle = kFillSolid;
   valButton794.fFont = ufont->GetFontHandle();
   valButton794.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton794, kTRUE);
   TGTextButton *fTextButton794 = new TGTextButton(fGroupFrame772,"Calcurate",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton794->SetTextJustify(36);
   fTextButton794->SetMargins(0,0,0,0);
   fTextButton794->SetWrapLength(-1);
   fTextButton794->Resize(92,24);
   fGroupFrame772->AddFrame(fTextButton794, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton794->MoveResize(80,130,92,24);

   fGroupFrame772->SetLayoutManager(new TGVerticalLayout(fGroupFrame772));
   fGroupFrame772->Resize(650,176);
   fCompositeFrame771->AddFrame(fGroupFrame772, new TGLayoutHints(kLHintsNormal));
   fGroupFrame772->MoveResize(150,48,650,176);

   // "For monitor" group frame
   TGGroupFrame *fGroupFrame795 = new TGGroupFrame(fCompositeFrame771,"For monitor");
   fGroupFrame795->SetLayoutBroken(kTRUE);

   //   TGNumberEntry *fNumberEntry796 = new TGNumberEntry(fGroupFrame795, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fNumberEntry796 = new TGNumberEntry(fGroupFrame795, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame795->AddFrame(fNumberEntry796, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntry796->MoveResize(30,50,59,22);

   //   TGNumberEntry *fNumberEntry800 = new TGNumberEntry(fGroupFrame795, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fNumberEntry800 = new TGNumberEntry(fGroupFrame795, (Double_t) 0,6,-1,(TGNumberFormat::EStyle) 5);
   fGroupFrame795->AddFrame(fNumberEntry800, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fNumberEntry800->MoveResize(30,90,59,22);
   TGLabel *fLabel804 = new TGLabel(fGroupFrame795,"TOP voltage (-V)");
   fLabel804->SetTextJustify(36);
   fLabel804->SetMargins(0,0,0,0);
   fLabel804->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel804, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel804->MoveResize(98,50,96,18);
   TGLabel *fLabel805 = new TGLabel(fGroupFrame795,"DOWN voltage (-V)");
   fLabel805->SetTextJustify(36);
   fLabel805->SetMargins(0,0,0,0);
   fLabel805->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel805, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel805->MoveResize(98,90,112,18);
   TGVertical3DLine *fVertical3DLine806 = new TGVertical3DLine(fGroupFrame795,8,144);
   fGroupFrame795->AddFrame(fVertical3DLine806, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fVertical3DLine806->MoveResize(256,16,8,144);

   ufont = gClient->GetFont("-*-times-medium-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t vall807;
   vall807.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",vall807.fForeground);
   gClient->GetColorByName("#e0e0e0",vall807.fBackground);
   vall807.fFillStyle = kFillSolid;
   vall807.fFont = ufont->GetFontHandle();
   vall807.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall807, kTRUE);
   TGLabel *fLabel807 = new TGLabel(fGroupFrame795,"Repic value",uGC->GetGC(),ufont->GetFontStruct());
   fLabel807->SetTextJustify(36);
   fLabel807->SetMargins(0,0,0,0);
   fLabel807->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel807, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel807->MoveResize(15,20,80,18);

   ufont = gClient->GetFont("-*-times-medium-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t vall808;
   vall808.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#0000ff",vall808.fForeground);
   gClient->GetColorByName("#e0e0e0",vall808.fBackground);
   vall808.fFillStyle = kFillSolid;
   vall808.fFont = ufont->GetFontHandle();
   vall808.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&vall808, kTRUE);
   TGLabel *fLabel808 = new TGLabel(fGroupFrame795,"Actual value",uGC->GetGC(),ufont->GetFontStruct());
   fLabel808->SetTextJustify(36);
   fLabel808->SetMargins(0,0,0,0);
   fLabel808->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel808, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel808->MoveResize(280,20,96,18);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry809;
   valEntry809.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry809.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry809.fBackground);
   valEntry809.fFillStyle = kFillSolid;
   valEntry809.fFont = ufont->GetFontHandle();
   valEntry809.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry809, kTRUE);

   //   TGTextEntry *fTextEntry809 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry809 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry809->SetMaxLength(4096);
   fTextEntry809->SetAlignment(kTextRight);
   fTextEntry809->SetText(" ");
   fTextEntry809->Resize(64,fTextEntry809->GetDefaultHeight());
   fGroupFrame795->AddFrame(fTextEntry809, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry809->MoveResize(290,50,64,22);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry810;
   valEntry810.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry810.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry810.fBackground);
   valEntry810.fFillStyle = kFillSolid;
   valEntry810.fFont = ufont->GetFontHandle();
   valEntry810.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry810, kTRUE);

   //   TGTextEntry *fTextEntry810 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry810 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry810->SetMaxLength(4096);
   fTextEntry810->SetAlignment(kTextRight);
   fTextEntry810->SetText(" ");
   fTextEntry810->Resize(64,fTextEntry810->GetDefaultHeight());
   fGroupFrame795->AddFrame(fTextEntry810, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry810->MoveResize(290,90,64,22);
   TGLabel *fLabel811 = new TGLabel(fGroupFrame795,"TOP (-V)");
   fLabel811->SetTextJustify(36);
   fLabel811->SetMargins(0,0,0,0);
   fLabel811->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel811, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel811->MoveResize(360,50,56,18);
   TGLabel *fLabel812 = new TGLabel(fGroupFrame795,"DOWN (-V)");
   fLabel812->SetTextJustify(36);
   fLabel812->SetMargins(0,0,0,0);
   fLabel812->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel812, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel812->MoveResize(360,91,72,18);

   ufont = gClient->GetFont("-*-helvetica-bold-r-*-*-0-*-*-*-*-*-*-*");

   // graphics context changes
   GCValues_t valButton813;
   valButton813.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#ff0000",valButton813.fForeground);
   gClient->GetColorByName("#e0e0e0",valButton813.fBackground);
   valButton813.fFillStyle = kFillSolid;
   valButton813.fFont = ufont->GetFontHandle();
   valButton813.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valButton813, kTRUE);

   TGTextButton *fTextButton813 = new TGTextButton(fGroupFrame795,"Calcurate",-1,uGC->GetGC(),ufont->GetFontStruct());
   //fTextButton813 = new TGTextButton(fGroupFrame795,"Calcurate",-1,uGC->GetGC(),ufont->GetFontStruct());
   fTextButton813->SetTextJustify(36);
   fTextButton813->SetMargins(0,0,0,0);
   fTextButton813->SetWrapLength(-1);
   fTextButton813->Resize(92,24);
   fGroupFrame795->AddFrame(fTextButton813, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton813->MoveResize(80,130,92,24);

   ufont = gClient->GetFont("-*-helvetica-medium-r-*-*-12-*-*-*-*-*-iso8859-1");

   // graphics context changes
   GCValues_t valEntry814;
   valEntry814.fMask = kGCForeground | kGCBackground | kGCFillStyle | kGCFont | kGCGraphicsExposures;
   gClient->GetColorByName("#000000",valEntry814.fForeground);
   gClient->GetColorByName("#e0e0e0",valEntry814.fBackground);
   valEntry814.fFillStyle = kFillSolid;
   valEntry814.fFont = ufont->GetFontHandle();
   valEntry814.fGraphicsExposures = kFALSE;
   uGC = gClient->GetGC(&valEntry814, kTRUE);

   //   TGTextEntry *fTextEntry814 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry814 = new TGTextEntry(fGroupFrame795, new TGTextBuffer(31),-1,uGC->GetGC(),ufont->GetFontStruct(),kSunkenFrame | kDoubleBorder | kOwnBackground);
   fTextEntry814->SetMaxLength(4096);
   fTextEntry814->SetAlignment(kTextRight);
   fTextEntry814->SetText(" ");
   fTextEntry814->Resize(96,fTextEntry814->GetDefaultHeight());
   fGroupFrame795->AddFrame(fTextEntry814, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextEntry814->MoveResize(480,68,96,22);
   TGLabel *fLabel815 = new TGLabel(fGroupFrame795,"difference (V)");
   fLabel815->SetTextJustify(36);
   fLabel815->SetMargins(0,0,0,0);
   fLabel815->SetWrapLength(-1);
   fGroupFrame795->AddFrame(fLabel815, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fLabel815->MoveResize(485,48,88,18);

   fGroupFrame795->SetLayoutManager(new TGVerticalLayout(fGroupFrame795));
   fGroupFrame795->Resize(650,176);
   fCompositeFrame771->AddFrame(fGroupFrame795, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fGroupFrame795->MoveResize(150,254,650,176);
   TGPictureButton *fPictureButton816 = new TGPictureButton(fCompositeFrame771,gClient->GetPicture("/home/pi/maikodev/pic/kuma3.png"));
   fCompositeFrame771->AddFrame(fPictureButton816, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fPictureButton816->MoveResize(391,451,144,152);
   fPictureButton816->SetCommand("gApplication->Terminate()");


   fTab693->SetTab(0);

   fTab693->Resize(fTab693->GetDefaultSize());
   fMainFrame1139->AddFrame(fTab693, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTab693->MoveResize(0,0,1062,767);

   fMainFrame1932->AddFrame(fMainFrame1139, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1139->MoveResize(0,0,1064,769);

   fMainFrame3424->AddFrame(fMainFrame1932, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1932->MoveResize(0,0,1063,763);

   fMainFrame1834->AddFrame(fMainFrame3424, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame3424->MoveResize(0,0,1004,751);

   fMainFrame2320->AddFrame(fMainFrame1834, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1834->MoveResize(0,0,1002,752);

   fMainFrame854->AddFrame(fMainFrame2320, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame2320->MoveResize(0,0,1002,753);

   fMainFrame1709->AddFrame(fMainFrame854, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame854->MoveResize(0,0,1002,755);

   fMainFrame1160->AddFrame(fMainFrame1709, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1709->MoveResize(0,0,1003,750);

   fMainFrame1237->AddFrame(fMainFrame1160, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1160->MoveResize(0,0,1000,741);

   fMainFrame1278->AddFrame(fMainFrame1237, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1237->MoveResize(0,0,999,739);

   fMainFrame964->AddFrame(fMainFrame1278, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1278->MoveResize(0,0,994,738);

   fMainFrame1420->AddFrame(fMainFrame964, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame964->MoveResize(0,0,994,737);

   fMainFrame1575->AddFrame(fMainFrame1420, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1420->MoveResize(0,0,996,740);

   fMainFrame1751->AddFrame(fMainFrame1575, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1575->MoveResize(0,0,997,741);

   fMainFrame1351->AddFrame(fMainFrame1751, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1751->MoveResize(0,0,989,736);

   fMainFrame945->AddFrame(fMainFrame1351, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1351->MoveResize(0,0,988,652);

   fMainFrame1102->AddFrame(fMainFrame945, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame945->MoveResize(0,0,988,728);

   fMainFrame1732->AddFrame(fMainFrame1102, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1102->MoveResize(0,0,985,681);

   fMainFrame1363->AddFrame(fMainFrame1732, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY));
   fMainFrame1732->MoveResize(0,0,983,677);

   fMainFrame1363->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame1363->MapSubwindows();

   fMainFrame1363->Resize(fMainFrame1363->GetDefaultSize());
   fMainFrame1363->MapWindow();
   fMainFrame1363->Resize(982,679);
}  

MainFrame::~MainFrame(){
  fMainFrame1363->Cleanup();
  delete fMainFrame1363;
}

void screen(){
  /* Popup the window */
  new MainFrame();
}


/* Main program*/
int main(int argc, char **argv)
{
  TApplication theApp("App", &argc,argv);
  screen();
  theApp.Run();
  return 0;
}  


/* Definition of functions of the buttons */

void MainFrame::Print(){
  const  char *printer_name;
  char pingcommand[256];
  char pricommand[256];
  int pri_result;

  printer_name = fTextEntry746->GetText();
  if(fComboBox722->GetSelected() == 1){
    c123->SaveAs("press.ps");
  }

  if(fComboBox722->GetSelected() == 2){
    c123->SaveAs("tempe.ps");
  }

  if(fComboBox722->GetSelected() == 3){
    c123->SaveAs("density.ps");
  }

  if(fComboBox722->GetSelected() == 4){
    c123->SaveAs("dew-deg.ps");
  }

  if(fComboBox722->GetSelected() == 5){
    c123->SaveAs("dew-ppm.ps");
  }

  /* Check if the printer exist. */
  sprintf(pingcommand, "ping -q -c 1 %s > /dev/null", printer_name);
  pri_result=system(pingcommand);

  if(pri_result != 0){
    cout << "Printer connection error!!" << endl;
  }

  if(pri_result == 0){
    sprintf(pricommand, "lpr -P %s out.ps", printer_name);
    system(pricommand);
    //    system("rm -f out.ps");
  }
}

void MainFrame::Record(){
  int plc_result;
  const  char *recfile;
  char command[256];
  int rec_int;

  recfile = fTextEntry697->GetText();
  rec_int = atoi(fTextEntry719->GetText());

  sprintf(command, "/home/pi/maikodev/program/rec %s %d &", recfile, rec_int);

  /* Check if the PLC CPU exits. */
  plc_result=system("ping -q -c 1 172.16.205.94 > /dev/null"); //RCNP
  //plc_result=system("ping -q -c 1 172.16.213.8 > /dev/null"); // New SUBARU

  /* Output file entity check */
  std::ifstream ifsTemp(recfile);
  bool bFileEntity = ifsTemp.is_open();
  ifsTemp.close();


  if(plc_result != 0){
    cout << "PLC CPU connection error!!" << endl;
    cout << "Please check the network connection." << endl;
  }
  else if(bFileEntity == true){
    cout << "Record file already exists!!" << endl;
  }
  else{
    system(command);
    printf("Record start!! \n");
    printf("outputfile: %s \n", recfile);
    fTextEntry698->SetText(recfile);
  }

  system(Form("/home/pi/maikodev/monitor/monitord %s",recfile));
}

void MainFrame::Plot(){
  
  const  char *plotfile;
  plotfile = fTextEntry698->GetText();
  
  FILE *fp;
  if((fp = fopen(plotfile, "r")) == NULL){
    cout << "Plot file doesn't exist!!" << endl;
  }

  else{

    c123->SetGrid();
    c123->cd();

    /* Pressure */
    if(fComboBox722->GetSelected() == 1){
      TGraph *g = new TGraph(plotfile, "%lf %lf %*lf %*lf %*lf %*lf %*lf %*lf", "");
      g->GetYaxis()->SetTitle("pressure (hPa)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kBlue);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      //      gStyle->SetTimeOffset(-789004800); // changed by 1day on 16/07/26
      gStyle->SetTimeOffset(timeoffset); // changed by 1day on 16/07/26
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

    /* Temperature */
    if(fComboBox722->GetSelected() == 2){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %lf %*lf %*lf %*lf %*lf %*lf", "");
      g->GetYaxis()->SetTitle("temperature (deg)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kRed);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

    /* Density */
    if(fComboBox722->GetSelected() == 3){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %*lf %lf %*lf %*lf %*lf %*lf", "");
      g->GetYaxis()->SetTitle("density (mmol/cm^{3})");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kViolet-6);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

    /* Dew-Point (degree) */
    if(fComboBox722->GetSelected() == 4){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %*lf %*lf %lf %*lf %*lf %*lf", "");
      g->GetYaxis()->SetTitle("dew point (deg)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kTeal+4);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

    /* Dew-Point (ppm) */
    if(fComboBox722->GetSelected() == 5){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %*lf %*lf %*lf %lf %*lf %*lf", "");
      g->GetYaxis()->SetTitle("dew point (ppm)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kCyan+2);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

 /* Flow 1 (cc/min) */
    if(fComboBox722->GetSelected() == 6){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %*lf %*lf %*lf %*lf %lf %*lf", "");
      g->GetYaxis()->SetTitle("Flow 1 (cc/min)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kCyan+2);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

 /* Flow 2 (cc/min) */
    if(fComboBox722->GetSelected() == 7){
      TGraph *g = new TGraph(plotfile, "%lf %*lf %*lf %*lf %*lf %*lf %*lf %lf", "");
      g->GetYaxis()->SetTitle("Flow 2 (cc/min)");
      g->GetYaxis()->SetTitleOffset(1.5);
      g->SetMarkerColor(kCyan+2);
      g->SetTitle("gas monitor");
    
      //      gStyle->SetTimeOffset(-788918400);
      gStyle->SetTimeOffset(timeoffset);
      gStyle->SetNdivisions(10);
      g->SetMarkerSize(1);
      g->SetMarkerStyle(21);
      g->SetLineWidth(2);
      g->GetXaxis()->SetTimeDisplay(1);
      g->GetXaxis()->SetLabelOffset(0.02);
      g->GetXaxis()->SetTimeFormat("#splitline{%H:%M}{%m\/%d}");
      g->Draw("AP");
    }

    c123->Update();  
  }
  
}
