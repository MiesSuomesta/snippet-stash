#ifndef TEMPLATE_HELPERS_H
#define TEMPLATE_HELPERS_H 1

/* 
	AUTHOR: Lauri Jakku <lja@lja.fi>

	Usage:

	withinRange<double> is_valid_percent {0, 100}; 
	..
	..
	..
	WithinRange<double> is_valid_percent {-100 , 100}; 
	
	bool a = is_valid_percent(50);
	bool b = is_valid_percent(0.35);
	bool c = is_valid_percent(101);
	
	cout << " a: " << a ;
	cout << " b: " << b ;
	cout << " c: " << c ;
	cout << endl;

*/

template<typename T>
class LessThan {

		const T val; /* value compare against */
		
		public:
			LessThan(const T& v) : val(v) {}
			bool operator()(const T& x) const { return x < val; } /* Call operator */

};

template<typename T>
class MoreThan {

		const T val; /* value compare against */
		
		public:
			MoreThan(const T& v) : val(v) {}
			bool operator()(const T& x) const { return x > val; } /* Call operator */

};

template<typename T>
class WithinRange {

		const T valMin; /* value compare against */
		const T valMax; /* value compare against */
		
		public:
			WithinRange(const T& vmin, const T& vmax) : valMin(vmin),valMax(vmax) {}
			bool operator()(const T& x) const { return (x >= valMin) && (x <= valMax); } /* Call operator */

};

#endif /* TEMPLATE_HELPERS_H */
