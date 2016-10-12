/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201601121427.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/com/ivis/CDL/ClientAPILocalStubDefault.hpp>
#include <assert.h>

namespace v1 {
namespace com {
namespace ivis {
namespace CDL {

ClientAPILocalStubDefault::ClientAPILocalStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(ClientAPILocal::getInterfaceVersion()) {
}

const CommonAPI::Version& ClientAPILocalStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

ClientAPILocalStubRemoteEvent* ClientAPILocalStubDefault::initStubAdapter(const std::shared_ptr<ClientAPILocalStubAdapter> &_adapter) {
    CommonAPI::Stub<ClientAPILocalStubAdapter, ClientAPILocalStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


void ClientAPILocalStubDefault::storeData(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _domain, std::string _subDomain, std::string _id, ClientAPILocalTypes::CDLData _data, storeDataReply_t _reply) {
    (void)_client;
    (void) _domain;
    (void) _subDomain;
    (void) _id;
    (void) _data;
    _reply();
}


void ClientAPILocalStubDefault::fireNotifyDataEvent(const std::string &_domain, const std::string &_subDomain, const std::string &_id, const ::v1::com::ivis::CDL::ClientAPILocalTypes::CDLData &_data) {
    assert((CommonAPI::Stub<ClientAPILocalStubAdapter, ClientAPILocalStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<ClientAPILocalStubAdapter, ClientAPILocalStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireNotifyDataEvent(_domain, _subDomain, _id, _data);
}


ClientAPILocalStubDefault::RemoteEventHandler::RemoteEventHandler(ClientAPILocalStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace CDL
} // namespace ivis
} // namespace com
} // namespace v1