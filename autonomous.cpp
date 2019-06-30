#include "main.h"

// A macro (shortcut) that allows one to just use "delay" to pause code execution.
// Time is in milliseconds.
#define delay(time) pros::delay(time)

void autonomous() {
  // Create a chassis to use for autonomous (this has built in autonomous control)
  // The last two numbers are used to tune turn and move amounts
  auto chassis = ChassisControllerFactory::create(
    -RIGHT_DRIVE_PORT, LEFT_DRIVE_PORT,
    AbstractMotor::gearset::green,
    {4_in, 12.6_in});

    //chassis.setMaxVelocity(70);

    // Pick up and drop Block 0
    move_claw(127);
    delay(150);
    move_claw(25);

    move_lift(127);
    delay(200);
    move_lift(10);

    chassis.moveDistance(20_in);

    move_claw(-127);
    delay(150);

    chassis.moveDistance(-30_in);


/*
    //Move to Block 1
    chassis.moveDistance(-12_in);
    delay(400);
    chassis.turnAngle(-90_deg);
    delay(150);
    chassis.moveDistance(36_in);
    delay(150);
    move_claw(127);
    delay(150);
    move_claw(50);
    delay(150);

    //put in goal
    chassis.moveDistance(-36_in);
    delay(150);
    chassis.turnAngle(90_deg);
    delay(150);
    chassis.moveDistance(12_in);
    delay(150);
    move_claw(-127);
    delay(150);

    //Block 2 Grab
    chassis.moveDistance(-3_ft);
    delay(300);
    chassis.turnAngle(-90_deg);
    delay(150);
    chassis.moveDistance(3_ft);
    delay(300);
    move_claw(127);
    delay(150);
    move_claw(50);

    //Block 2 put in goal
    chassis.moveDistance(-3_ft);
    delay(300);
    chassis.turnAngle(90_deg);
    delay(150);
    chassis.moveDistance(3_ft);
    delay(300);
    move_claw(-127);
    delay(150);

    //Put Block 3 in
    move_lift(-127); // lower arm
    move_claw(127); //close claw
    move_lift(127); // lifts the arm
    chassis.turnAngle(-90_deg);
    chassis.moveDistance(5_ft); //move to the pole
    move_lift(20); //reinforce lifted Arm
    move_claw(-127); //drops the cube into the tower

    //Angela + Vika
    move_lift(-127); // lower arm
    move_claw(127); //close claw
    move_lift(127); // lifts the arm
    chassis.turnAngle(-90_deg);
    chassis.moveDistance(10_ft); //move to the pole
    move_lift(20); //reinforce lifted Arm
    move_claw(-127); //drops the cube into the tower
*/
}
