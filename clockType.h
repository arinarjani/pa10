// ============================================================================
//                            INTERFACE FILE
//=============================================================================

#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

class clockType {
    public:
      void setTime ( int hours, int minutes, int seconds );
      void getTime ( int& hours, int& minutes, int& seconds ) const;
      void printTime() const;
      void incrementSeconds();
      void incrementMinutes();
      void incrementHours();
      bool equalTime ( const clockType& other ) const;
      clockType();

      // MY FUNCTION ADDITIONS

      /// @breif  sets only the hours
      ///@param hours
      void setHours ( int hours );
      /// @breif  sets only the minutes
      ///@param  minutes
      void setMinutes ( int minutes );
      /// @breif  sets only the seconds
      ///@param  seconds
      void setSeconds ( int seconds );
      /// @breif  return the amount of hours on clock
      ///@param  n/a
      int getHours() const;  // returning hours (change the rest of "print")
      /// @breif  returns the amount of minutes on clock
      ///@param  n/a
      int getMinutes() const;
      /// @breif  returns the amount of seconds on clock
      ///@param  n/a
      int getSeconds() const;
      /// @breif  returns the total time passed in day in seconds
      ///@param  n/a
      int elapsedTime() const;  // return the elasped TOD in seconds (what data type?) can seconds be anything but whole #'s? value returning f(x) and thing about what value you are returing
      /// @breif  returns the time left in the day in seconds
      ///@param  n/a
      int remainingTime() const;  //
      /// @breif  compares the Difference of a new clock to the current clock
      ///@param  new clock of clockType
      void difference( const clockType& other) const;  // other is the comparing clock

    private:
      int hr;   // hours in class
      int min;  // minutes in class
      int sec;  // seconds in class
};


#endif /* CLOCKTYPE_H */
