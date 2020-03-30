#ifndef TRAJ_GEN_H
#define TRAJ_GEN_H

#include </usr/include/eigen3/Eigen/Eigen>
#include <cmath>
#include <string>
#include <iostream>

using namespace Eigen;
using namespace std;

enum yawType {rot360,goTo};

class traj_gen
{
private:
    /* data */
    Array<double, Dynamic, 6> _map_ax;
    Array<double, Dynamic, 6> _map_ay;
    Array<double, Dynamic, 6> _map_az;
    Array<double, Dynamic, 6> _map_ayaw;
    Array<double, Dynamic, 1> _endTime;

    /* members */
    void trajectoryMatrices(double initialTime, 
                            double endTime, 
                            const Ref<const Array4d>& si,
                            const Ref<const Array4d>& dsi,
                            const Ref<const Array4d>& d2si, 
                            const Ref<const Array4d>& sf,
                            const Ref<const Array4d>& dsf,
                            const Ref<const Array4d>& d2sf,
                            Ref<ArrayXd> ax,
                            Ref<ArrayXd> ay,
                            Ref<ArrayXd> az,
                            Ref<ArrayXd> ayaw);
    Array<double, 1, 6> polyMatrix(double initialTime,
                                    double endTime,
                                    double qi,
                                    double dqi,
                                    double d2qi,
                                    double qf,
                                    double dqf,
                                    double d2qf);
    Array<double, 1, 4> axisDesiredTrajectory(const Ref<const ArrayXd>& a, double time, double initialTime, double maxTime);

public:
    traj_gen(/* args */);
    ~traj_gen();

    void geronoToWaypoints(double length, double width, double height, double endTime, int steps, 
                           yawType yawtype, double yawSp, Ref<MatrixXd> waypoints, Ref<ArrayXd> time);
    void setTrajectory(const Ref<const MatrixXd>& waypoints, const Ref<const ArrayXd>& time, const Ref<const Array3d>& initialPosition, 
                             const Ref<const Array3d>& initialVelocity, double initialYaw, double initialYawSpeed);
    void desiredTrajectory(double time, Ref<Vector3d> position, Ref<Vector3d> velocity, Ref<Vector3d> acceleration, double& yaw); 
};
 
#endif