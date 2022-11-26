/**
 * @file  RakWebSocket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocket.
 *
 */
class RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKET
public:
    class RakWebSocket& operator=(class RakWebSocket const &) = delete;
    RakWebSocket(class RakWebSocket const &) = delete;
    RakWebSocket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1842135051
     */
    virtual ~RakWebSocket();
    /**
     * @vftbl  1
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   1842550940
     */
    virtual enum class WSConnectionResult connect(std::string const &, std::vector<std::string> const &);
    /**
     * @vftbl  2
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1421763411
     */
    virtual enum class WSConnectionResult connect(std::string const &);
    /**
     * @vftbl  3
     * @symbol ?isReady@RakWebSocket@@UEBA_NXZ
     * @hash   -2091483978
     */
    virtual bool isReady() const;
    /**
     * @vftbl  4
     * @symbol ?setOnMessageReceivedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBVRakWebSocketDataFrame@@@Z@std@@@Z
     * @hash   -398833135
     */
    virtual void setOnMessageReceivedHandler(class std::function<void (class RakWebSocketDataFrame const &)> const &);
    /**
     * @vftbl  5
     * @symbol ?setOnCloseHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   818622926
     */
    virtual void setOnCloseHandler(class std::function<void (enum class CloseStatusCode, std::string const &)> const &);
    /**
     * @vftbl  6
     * @symbol ?setOnConnectedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   812856947
     */
    virtual void setOnConnectedHandler(class std::function<void (std::string const &)> const &);
    /**
     * @vftbl  7
     * @symbol ?tick@RakWebSocket@@UEAAXXZ
     * @hash   -189172279
     */
    virtual void tick();
    /**
     * @vftbl  8
     * @symbol ?_updateState@RakWebSocketClient@@MEAAXXZ
     * @hash   -400294103
     */
    virtual void _updateState() = 0;
    /**
     * @vftbl  9
     * @symbol ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
     * @hash   1983950249
     */
    virtual unsigned int _genMaskingKey() const = 0;
    /**
     * @symbol ??0RakWebSocket@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@_N@Z
     * @hash   1185171137
     */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);
    /**
     * @symbol ?close@RakWebSocket@@QEAAX_N0@Z
     * @hash   865005630
     */
    MCAPI void close(bool, bool);
    /**
     * @symbol ?getUri@RakWebSocket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1359831902
     */
    MCAPI std::string getUri() const;
    /**
     * @symbol ?isDisconnected@RakWebSocket@@QEBA_NXZ
     * @hash   -334719294
     */
    MCAPI bool isDisconnected() const;
    /**
     * @symbol ?send@RakWebSocket@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   851670793
     */
    MCAPI bool send(std::string const &);
    /**
     * @symbol ?sendBinary@RakWebSocket@@QEAA_NPEBE_K@Z
     * @hash   573747406
     */
    MCAPI bool sendBinary(unsigned char const *, unsigned __int64);

//protected:
    /**
     * @symbol ?_close@RakWebSocket@@IEAAXW4CloseStatusCode@@@Z
     * @hash   -1739761038
     */
    MCAPI void _close(enum class CloseStatusCode);
    /**
     * @symbol ?_createWebSocketKey@RakWebSocket@@IEAAXXZ
     * @hash   1938696507
     */
    MCAPI void _createWebSocketKey();
    /**
     * @symbol ?_fail@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CloseStatusCode@@@Z
     * @hash   -1102754244
     */
    MCAPI void _fail(std::string const &, enum class CloseStatusCode);
    /**
     * @symbol ?_generateBase64SHA1Key@RakWebSocket@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1782667281
     */
    MCAPI std::string _generateBase64SHA1Key(std::string const &);
    /**
     * @symbol ?_invokeOnCloseHandler@RakWebSocket@@IEAAXXZ
     * @hash   -1451142496
     */
    MCAPI void _invokeOnCloseHandler();
    /**
     * @symbol ?_processClosingFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   -349462259
     */
    MCAPI void _processClosingFrames(class RakNet::BitStream &);
    /**
     * @symbol ?_processClosingHandshake@RakWebSocket@@IEAAX_N@Z
     * @hash   365866762
     */
    MCAPI void _processClosingHandshake(bool);
    /**
     * @symbol ?_processDataFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   1643237752
     */
    MCAPI void _processDataFrames(class RakNet::BitStream &);
    /**
     * @symbol ?_processOpenHandshakePackets@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   1686986730
     */
    MCAPI void _processOpenHandshakePackets(class RakNet::BitStream &);
    /**
     * @symbol ?_processPacket@RakWebSocket@@IEAA_NAEBV?$function@$$A6AXAEAVBitStream@RakNet@@@Z@std@@_N@Z
     * @hash   -1760574793
     */
    MCAPI bool _processPacket(class std::function<void (class RakNet::BitStream &)> const &, bool);
    /**
     * @symbol ?_reset@RakWebSocket@@IEAAXXZ
     * @hash   -204727880
     */
    MCAPI void _reset();
    /**
     * @symbol ?_sendControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     * @hash   1396662581
     */
    MCAPI bool _sendControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @symbol ?_sendDataFrame@RakWebSocket@@IEAA_NPEBEIW4OpCode@@_N@Z
     * @hash   -1727039758
     */
    MCAPI bool _sendDataFrame(unsigned char const *, unsigned int, enum class OpCode, bool);
    /**
     * @symbol ?_sendNonControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     * @hash   -855508714
     */
    MCAPI bool _sendNonControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @symbol ?_splitWebSocketURI@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@11@Z
     * @hash   771673179
     */
    MCAPI void _splitWebSocketURI(std::string const &, std::string &, std::string &, std::string &);
    /**
     * @symbol ?_subProcessHttpResponse@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   465907265
     */
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream &);
    /**
     * @symbol ?_validateFields@RakWebSocket@@IEAAXXZ
     * @hash   -1980719338
     */
    MCAPI void _validateFields();
    /**
     * @symbol ?_validateWebSocketURI@RakWebSocket@@IEAA_NXZ
     * @hash   786963340
     */
    MCAPI bool _validateWebSocketURI();

protected:

};