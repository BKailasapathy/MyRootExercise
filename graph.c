{
  double x[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  double y[8] = {1, 4, 7, 12, 8, 6, 8, 10};
  
  // TGraph gr{8, x, y};
  TGraph *gr = new TGraph(8,x,y);
  
  
  TCanvas c1;
  //gr.Draw("AC*");
  gr -> Draw("AC");
}
