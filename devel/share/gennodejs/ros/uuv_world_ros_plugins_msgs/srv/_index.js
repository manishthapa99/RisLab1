
"use strict";

let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')

module.exports = {
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  SetCurrentModel: SetCurrentModel,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  TransformToSphericalCoord: TransformToSphericalCoord,
  GetCurrentModel: GetCurrentModel,
  SetCurrentDirection: SetCurrentDirection,
  SetCurrentVelocity: SetCurrentVelocity,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
};
