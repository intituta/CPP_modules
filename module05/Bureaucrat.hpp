#include "Bureaucrat.cpp"

class Bureaucrat {

    private:
        constd std::string  name;
        int                 grade;

    public:
        Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        ~Bureaucrat();

        void increment();
        void decrement();

        class GradeTooHightException : public std::runtime_error {

            public:
                GradeTooHightException(const std::string &error) : std::runtime_error(error) {}
        };

        class GradeToLowException(const std::sting &error) : std::runtime_error(error) {
        
            public:
                GradeTooLowException(const std::string &error) : std::runtime_error(error) {}
        };
}
