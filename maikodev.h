#include <TQObject.h>
#include <RQ_OBJECT.h>
#include <TCanvas.h>
#include <TGTextEntry.h>
#include <TGNumberEntry.h>
#include <TGComboBox.h>
#include <TGLabel.h>

class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class MainFrame{
  RQ_OBJECT("MainFrame");
 private:

  //  TCanvas pCanvas;
 public:

  TGMainFrame *fMainFrame1363;
  //  TRootEmbeddedCanvas *fRootEmbeddedCanvas670;

  MainFrame();
  virtual ~MainFrame();

  TCanvas *c123;
  
  TGTextEntry *fTextEntry697;
  TGTextEntry *fTextEntry698;
  TGTextEntry *fTextEntry719;
  TGTextEntry *fTextEntry739;
  TGTextEntry *fTextEntry746;
  TGTextEntry *fTextEntry752;
  TGTextEntry *fTextEntry753;
  TGTextEntry *fTextEntry754;
  TGTextEntry *fTextEntry755;
  TGTextEntry *fTextEntry786;
  TGTextEntry *fTextEntry787;
  TGTextEntry *fTextEntry790;
  TGTextEntry *fTextEntry791;
  TGTextEntry *fTextEntry809;
  TGTextEntry *fTextEntry810;
  TGTextEntry *fTextEntry814;

  TGComboBox *fComboBox722;

  TGNumberEntry *fNumberEntry773;
  TGNumberEntry *fNumberEntry777;
  TGNumberEntry *fNumberEntry796;
  TGNumberEntry *fNumberEntry800;

  void Record();
  void Print();
  void Plot();
  
};
