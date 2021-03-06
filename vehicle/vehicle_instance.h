// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef VEHICLE_VEHICLE_INSTANCE_H_
#define VEHICLE_VEHICLE_INSTANCE_H_

#include "common/extension.h"
#include "common/picojson.h"
#include "vehicle/vehicle.h"

class VehicleInstance : public common::Instance {
 public:
  VehicleInstance();
  virtual ~VehicleInstance() {}

 private:
  // common::Instance implementation.
  virtual void HandleMessage(const char* msg);
  virtual void HandleSyncMessage(const char* msg);

  int ZoneToAMBZone(picojson::array);

  Vehicle* vehicle_;
};

#endif  // VEHICLE_VEHICLE_INSTANCE_H_
