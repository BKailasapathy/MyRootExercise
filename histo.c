{
  TH1F hist("hist","Histogram",100,-5,5);
  TRandom2 r;
  for(int i, i<1000,i++)
  {
    hist.Fill(r.Gaus());
  }
  
  TCanvas *c1 = new TCanvas();
  hist.Draw();
  hist.Fit("Gaus");
}  
