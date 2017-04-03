/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_STUB_DEFAULT_HPP_
#define V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_STUB_DEFAULT_HPP_


#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerStub.hpp>
#include <sstream>

namespace v1 {
namespace com {
namespace ivis {
namespace VehicleDataManager {

/**
 * Provides a default implementation for VehicleDataManagerStubRemoteEvent and
 * VehicleDataManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class VehicleDataManagerStubDefault
    : public virtual VehicleDataManagerStub {
public:
    VehicleDataManagerStubDefault();

    VehicleDataManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr<VehicleDataManagerStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed& getVehicleSpeedAttribute();
    virtual const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed& getVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setVehicleSpeedAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed _value);
    virtual void setVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed _value);
    virtual const std::string& getVinAttribute();
    virtual const std::string& getVinAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setVinAttribute(std::string _value);
    virtual void setVinAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _value);
    virtual const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus& getTransmissionGearStatusAttribute();
    virtual const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus& getTransmissionGearStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTransmissionGearStatusAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus _value);
    virtual void setTransmissionGearStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus _value);
    virtual const bool& getDrivingRestrictionAttribute();
    virtual const bool& getDrivingRestrictionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setDrivingRestrictionAttribute(bool _value);
    virtual void setDrivingRestrictionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
    virtual const bool& getLowFuelWarningAttribute();
    virtual const bool& getLowFuelWarningAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setLowFuelWarningAttribute(bool _value);
    virtual void setLowFuelWarningAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);




protected:
    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    virtual bool trySetVehicleSpeedAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed _value);
    virtual bool validateVehicleSpeedAttributeRequestedValue(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed &_value);
    virtual void onRemoteVehicleSpeedAttributeChanged();
    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    virtual bool trySetVinAttribute(std::string _value);
    virtual bool validateVinAttributeRequestedValue(const std::string &_value);
    virtual void onRemoteVinAttributeChanged();
    /**
     * description: This attribute contains the current status of transmission gear.
     */
    virtual bool trySetTransmissionGearStatusAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus _value);
    virtual bool validateTransmissionGearStatusAttributeRequestedValue(const ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus &_value);
    virtual void onRemoteTransmissionGearStatusAttributeChanged();
    virtual bool trySetDrivingRestrictionAttribute(bool _value);
    virtual bool validateDrivingRestrictionAttributeRequestedValue(const bool &_value);
    virtual void onRemoteDrivingRestrictionAttributeChanged();
    virtual bool trySetLowFuelWarningAttribute(bool _value);
    virtual bool validateLowFuelWarningAttributeRequestedValue(const bool &_value);
    virtual void onRemoteLowFuelWarningAttributeChanged();
    class RemoteEventHandler: public virtual VehicleDataManagerStubRemoteEvent {
    public:
        RemoteEventHandler(VehicleDataManagerStubDefault *_defaultStub);

        /**
         * description: This attribute contains the current speed of this vehicle. The unit of value is
         *   km/h or mph.
         */
        virtual bool onRemoteSetVehicleSpeedAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed _value);
        virtual bool onRemoteSetVehicleSpeedAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed _value);
        virtual void onRemoteVehicleSpeedAttributeChanged();

        /**
         * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
         *   3779) information for this vehicle. It's 17 bytes long characters.
         */
        virtual bool onRemoteSetVinAttribute(std::string _value);
        virtual bool onRemoteSetVinAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _value);
        virtual void onRemoteVinAttributeChanged();

        /**
         * description: This attribute contains the current status of transmission gear.
         */
        virtual bool onRemoteSetTransmissionGearStatusAttribute(::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus _value);
        virtual bool onRemoteSetTransmissionGearStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus _value);
        virtual void onRemoteTransmissionGearStatusAttributeChanged();

        virtual bool onRemoteSetDrivingRestrictionAttribute(bool _value);
        virtual bool onRemoteSetDrivingRestrictionAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteDrivingRestrictionAttributeChanged();

        virtual bool onRemoteSetLowFuelWarningAttribute(bool _value);
        virtual bool onRemoteSetLowFuelWarningAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, bool _value);
        virtual void onRemoteLowFuelWarningAttributeChanged();


    private:
        VehicleDataManagerStubDefault *defaultStub_;
    };
private:
    VehicleDataManagerStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::VehicleSpeed vehicleSpeedAttributeValue_ {};
    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    std::string vinAttributeValue_ {};
    /**
     * description: This attribute contains the current status of transmission gear.
     */
    ::v1::com::ivis::VehicleDataManager::VehicleDataManagerTypes::TransmissionGearStatus transmissionGearStatusAttributeValue_ {};
    bool drivingRestrictionAttributeValue_ {};
    bool lowFuelWarningAttributeValue_ {};

    CommonAPI::Version interfaceVersion_;
};

} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_STUB_DEFAULT