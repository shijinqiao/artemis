#ifndef MOTOR_H
#define MOTOR_H
#include <stdint.h>

class Motor {
public:
    Motor(const int directionPin, const int pwmPin);

    void ChangeDirection();
    void SetDirectionForwards();
    void SetDirectionBackwards();
    void SetSpeed(int speed);
    void Stop();

private:
    const uint8_t m_directionPin;
    const uint8_t m_pwmPin;
};

#endif // end of include guard: MOTOR_H 
