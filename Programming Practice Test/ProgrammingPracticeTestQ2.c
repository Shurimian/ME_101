void calculations (float &perimeter, float &area)
{
	float initialDist = 0;
	float finalDist = 0;

	initialDist = SensorValue[S1];

	motor[motorA] = motor[MotorD] = 20;
	while(SensorValue[S2] == 3)
	{}
	motor[motorA] = motor[MotorD] = 0;

	finalDist = SensorValue[S1];

	perimeter = 4*(initialDist - finalDist);
	area = pow((initialDist - finalDist),2);
}

task main()
{
	SensorType[S1] = sensorEV3_Ultrasonic;
	SensorType[S2] = sensorEV3_Color;
	wait1Msec(50);
	SensorMode[S2] = modeEV3Color_Color;
	wait1Msec(50);

	float perimeter = 0;
	float area = 0;

	motor[motorA] = motor[MotorD] = 20;
	while(SensorValue[S2] != 3)
	{}
	motor[motorA] = motor[MotorD] = 0;

	calculations(perimeter, area);

	displayString(3, "The perimeter of the square is %f", perimeter);
	displayString(4, "The area of the square is %f", area);
	wait1Msec(8*1000);
}
