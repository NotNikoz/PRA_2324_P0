#include <iostream>
using namespace std;

class BrazoRobotico {
	private :
		double x;
		double y;
		double z;
		bool estaSujetando;
	public :
		BrazoRobotico (double , double , double, bool);
		double getCoordenates_X ();
		double getCoordenates_Y ();
		double getCoordenates_Z ();
		bool get_estaSujetando ();
		void coger ();
		void soltar ();
		void mover (double, double, double);
};
