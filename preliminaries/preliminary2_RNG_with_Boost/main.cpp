#include <iostream>

/* boost/random/mersenne_twister --- random numbers generator needed to
pass to the various distributions to produce the numbers */
#include <boost/random/mersenne_twister.hpp>
/* importing two distributions to play with */
#include <boost/random/normal_distribution.hpp>
#include <boost/random/exponential_distribution.hpp>
#include <boost/random/variate_generator.hpp>


int main()
{
    // create instance of the Mersenne twister
    boost::random::mt19937 objMt = boost::random::mt19937(123.3);

    // create object representing the normal distribution
    boost::random::normal_distribution<> objNd = boost::random::normal_distribution<>(0, 1);

    // create variate generator
    boost::random::variate_generator<boost::random::mt19937, boost::random::normal_distribution<>>
        rng = boost::random::variate_generator<boost::random::mt19937, boost::random::normal_distribution<>>(objMt, objNd);

    //
    std::cout << "random number: " << rng() << std::endl;

    return 0;
}
