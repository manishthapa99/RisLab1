
"use strict";

let SwitchToManual = require('./SwitchToManual.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let GoToIncremental = require('./GoToIncremental.js')
let SetPIDParams = require('./SetPIDParams.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let ResetController = require('./ResetController.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let GetPIDParams = require('./GetPIDParams.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let AddWaypoint = require('./AddWaypoint.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let Hold = require('./Hold.js')
let GoTo = require('./GoTo.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GetWaypoints = require('./GetWaypoints.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let StartTrajectory = require('./StartTrajectory.js')

module.exports = {
  SwitchToManual: SwitchToManual,
  GetSMControllerParams: GetSMControllerParams,
  GetMBSMControllerParams: GetMBSMControllerParams,
  InitWaypointSet: InitWaypointSet,
  InitRectTrajectory: InitRectTrajectory,
  GoToIncremental: GoToIncremental,
  SetPIDParams: SetPIDParams,
  InitWaypointsFromFile: InitWaypointsFromFile,
  ResetController: ResetController,
  ClearWaypoints: ClearWaypoints,
  IsRunningTrajectory: IsRunningTrajectory,
  GetPIDParams: GetPIDParams,
  SetSMControllerParams: SetSMControllerParams,
  AddWaypoint: AddWaypoint,
  SwitchToAutomatic: SwitchToAutomatic,
  Hold: Hold,
  GoTo: GoTo,
  SetMBSMControllerParams: SetMBSMControllerParams,
  GetWaypoints: GetWaypoints,
  InitHelicalTrajectory: InitHelicalTrajectory,
  InitCircularTrajectory: InitCircularTrajectory,
  StartTrajectory: StartTrajectory,
};
