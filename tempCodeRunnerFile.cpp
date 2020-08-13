void ConvertFromSeconds(int totalSec, double *secs, int *mins, int *hrs);

int main()
{
   
   int totalSec;
   double secs;
   int mins, hrs;
  
   // Test Case 1:
   totalSec = 35; 
      
   ConvertFromSeconds(totalSec, &secs, &mins, &hrs); 
   cout <<"totalSec = " << totalSec << ", Hrs = " << hrs << ", Mins = " << mins << ", Secs = " << secs << endl;
  
  
   // Test Case 2:
   totalSec = 75;
      
   ConvertFromSeconds(totalSec, &secs, &mins, &hrs);
  
   cout <<"totalSec = " << totalSec << ", Hrs = " << hrs << ", Mins = " << mins << ", Secs = " << secs << endl;
  
  
   // Test Case 3:
   totalSec = 3935;
      
   ConvertFromSeconds(totalSec, &secs, &mins, &hrs);
  
   cout <<"totalSec = " << totalSec << ", Hrs = " << hrs << ", Mins = " << mins << ", Secs = " << secs;
  
}

void ConvertFromSeconds(int totalSec, double *secs, int *mins, int *hrs)
{
   *hrs = totalSec / 3600; // Calculation of hours
   totalSec = totalSec % 3600;
   *mins = totalSec / 60; // Calculation of minutes 
   totalSec = totalSec % 60;
   *secs = totalSec; // Calculation of seconds 
}