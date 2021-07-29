{
  double x[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  double y[8] = {1, 4, 7, 12, 8, 6, 8, 10};
  
    //TGraph gr{8, x, y};
  TGraph *gr = new TGraph(8, x ,y);
  
  gr-> SetLineWidth(3);
  gr->SetLineColor(kBlue);
  gr-> SetMarkerColor(kRed);
  gr->SetMarkerStyle(kCircle);
  gr->SetTitle("Title of the Graph");
  gr->GetXaxis()->SetTitle("X title");
  gr->GetYaxis()->SetTitle("Y title");
  
  
 //TCanvas c1;
 //c1.SetLogy();
 

 TCanvas *c1 = new TCanvas();
  //If log axis is needed
  //c1 -> SetLogy();
   
  
  //gr.Draw("AC*");
  gr -> Draw("ACP");
  
  
  //     https://root.cern.ch/doc/master/classTGraphPainter.html   
  
}
