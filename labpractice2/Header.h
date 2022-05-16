#ifndef  MYRCurrency_H
#define MYRCurrency_H

class  MYRCurrency
{
  private:

       double amount;
       double rate;

  public:

        MYRCurrency();
        MYRCurrency(double, double);
        ~MYRCurrency();
        double convertCurrency(double, double);
};
#endif

