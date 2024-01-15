/******************
 * @author: Ankush Ahuja
 * Simple driving functions
******************/

/**
 * @brief Drive forward with given speed (percentage)
 *
 * @param speed speed in percentage (0-100);
 */
void forward(int speed);


/**
 * @brief Drive forward with full speed
 */
void full_forward();

/**
 * @brief Drive backwards with given speed (percentage)
 *
 * @param speed speed in percentage (0-100);
 */
void backward(int speed);

/**
 * @brief Drive backwards with full speed
 */
void full_backward();

/**
 * @brief Turn left for d degrees
 *
 * @param d degrees 
 */
void left(int d);

/**
 * @brief Turn right for d degrees
 *
 * @param d degrees
 */
void right(int d);

/**
 * @brief Does one iteration of the line follower, may be used in a loop with a exit case
 */
void follow_line();
