{
  double x[8] = {1, 2, 3, 4, 5, 6, 7, 8}
  double y[8] = {1. 4, 7, 12, 8, 6, 8, 10}
  
  TGraph gr{5, x, y}
  TCanvus c1;
  gr.Draw("AC*");
}
