#include <TQObject.h>
#include <RQ_OBJECT.h>
#include <TCanvas.h>
#include <TGTextEntry.h>

class TGWindow;
class TGMainFrame;
class TRootEmbeddedCanvas;
class MainFrame{
  RQ_OBJECT("MainFrame");
 private:

  //  TCanvas pCanvas;
 public:
  TGMainFrame *fMainFrame860;
  TRootEmbeddedCanvas *fRootEmbeddedCanvas670;

  MainFrame();
  virtual ~MainFrame();
  TCanvas *c123;
  TGTextEntry *fTextEntry693;
  TGTextEntry *fTextEntry690;
  TGTextEntry *fTextEntry684;
  void DoPrint();
  void Record();
  void DoPlot();
};
