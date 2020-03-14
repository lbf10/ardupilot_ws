
"use strict";

let BatteryStatus = require('./BatteryStatus.js');
let WaypointReached = require('./WaypointReached.js');
let StatusText = require('./StatusText.js');
let Altitude = require('./Altitude.js');
let Param = require('./Param.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let Trajectory = require('./Trajectory.js');
let HilControls = require('./HilControls.js');
let VFR_HUD = require('./VFR_HUD.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let LogEntry = require('./LogEntry.js');
let LandingTarget = require('./LandingTarget.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let HilSensor = require('./HilSensor.js');
let Waypoint = require('./Waypoint.js');
let WaypointList = require('./WaypointList.js');
let RCIn = require('./RCIn.js');
let Vibration = require('./Vibration.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let ActuatorControl = require('./ActuatorControl.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let HilGPS = require('./HilGPS.js');
let ManualControl = require('./ManualControl.js');
let PositionTarget = require('./PositionTarget.js');
let MountControl = require('./MountControl.js');
let FileEntry = require('./FileEntry.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let RadioStatus = require('./RadioStatus.js');
let Mavlink = require('./Mavlink.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let RCOut = require('./RCOut.js');
let State = require('./State.js');
let RTCM = require('./RTCM.js');
let ExtendedState = require('./ExtendedState.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let VehicleInfo = require('./VehicleInfo.js');
let CommandCode = require('./CommandCode.js');
let DebugValue = require('./DebugValue.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let Thrust = require('./Thrust.js');
let HomePosition = require('./HomePosition.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let LogData = require('./LogData.js');
let ParamValue = require('./ParamValue.js');

module.exports = {
  BatteryStatus: BatteryStatus,
  WaypointReached: WaypointReached,
  StatusText: StatusText,
  Altitude: Altitude,
  Param: Param,
  OpticalFlowRad: OpticalFlowRad,
  Trajectory: Trajectory,
  HilControls: HilControls,
  VFR_HUD: VFR_HUD,
  CompanionProcessStatus: CompanionProcessStatus,
  LogEntry: LogEntry,
  LandingTarget: LandingTarget,
  ADSBVehicle: ADSBVehicle,
  HilSensor: HilSensor,
  Waypoint: Waypoint,
  WaypointList: WaypointList,
  RCIn: RCIn,
  Vibration: Vibration,
  HilStateQuaternion: HilStateQuaternion,
  ActuatorControl: ActuatorControl,
  OnboardComputerStatus: OnboardComputerStatus,
  TimesyncStatus: TimesyncStatus,
  GlobalPositionTarget: GlobalPositionTarget,
  HilGPS: HilGPS,
  ManualControl: ManualControl,
  PositionTarget: PositionTarget,
  MountControl: MountControl,
  FileEntry: FileEntry,
  EstimatorStatus: EstimatorStatus,
  AttitudeTarget: AttitudeTarget,
  RadioStatus: RadioStatus,
  Mavlink: Mavlink,
  HilActuatorControls: HilActuatorControls,
  RCOut: RCOut,
  State: State,
  RTCM: RTCM,
  ExtendedState: ExtendedState,
  CamIMUStamp: CamIMUStamp,
  VehicleInfo: VehicleInfo,
  CommandCode: CommandCode,
  DebugValue: DebugValue,
  WheelOdomStamped: WheelOdomStamped,
  Thrust: Thrust,
  HomePosition: HomePosition,
  OverrideRCIn: OverrideRCIn,
  LogData: LogData,
  ParamValue: ParamValue,
};
