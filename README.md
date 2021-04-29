# snippet-stash


C++:

	template_helpers.h:
		
		Template classes: LessThan, MoreThan & WithinRange
		
			USAGE:
				LessThan<double>	less_than_50 {50}; 
				MoreThan<double> 	more_than_50 {50}; 
				WithinRange<double>	is_valid_percent {-100 , 100}; 

				
				bool pa = is_valid_percent(50);
				bool pb = is_valid_percent(0.35);
				bool pc = is_valid_percent(101);

				bool la = less_than_50(50);
				bool lb = less_than_50(0.35);
				bool lc = less_than_50(101);

				bool ma = more_than_50(50);
				bool mb = more_than_50(0.35);
				bool mc = more_than_50(101);

Happy coding....
