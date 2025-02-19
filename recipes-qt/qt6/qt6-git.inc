DESCRIPTION ?= "Qt is a cross-platform application development framework for desktop, embedded and mobile."
HOMEPAGE ?= "https://www.qt.io"

QT_MODULE ?= "${BPN}"
QT_MODULE_BRANCH ?= "6.5"
QT_MODULE_BRANCH_PARAM ?= "branch=${QT_MODULE_BRANCH};nobranch=1"
QT_MODULE_REPO ?= "${QT_MODULE}.git"

SRC_URI = "${QT_GIT}/${QT_GIT_PROJECT}/${QT_MODULE_REPO};name=${QT_MODULE};${QT_MODULE_BRANCH_PARAM};protocol=${QT_GIT_PROTOCOL}"

CVE_PRODUCT:append = " qt"

S = "${WORKDIR}/git"

PV = "${QT_VERSION}"

SRCREV = "${SRCREV_${QT_MODULE}}"

SRCREV_tqtc-qmlcompilerplus = "4b6b562d63d02ea448501541fca50bd4d5244db7"
SRCREV_tqtc-qtinsighttracker = "d1d56c60caf20a670d73f59a3739df62a5e2f333"
SRCREV_tqtc-qtvncserver = "92c20090729dfc1d31962f7ec1ffda346acae488"
SRCREV_qt3d = "8067587a49dd29cbea35fb9013b6b623ef4151ee"
SRCREV_qt3d-assimp = "5967dee48b0b8ed32a41579559570e380462a1dd"
SRCREV_qt5compat = "1e3e94357020929c8fe402caeae4ffd150963f56"
SRCREV_qtbase = "f1cf87ed32c7216e190a331f8d155ad06be325bb"
SRCREV_qtapplicationmanager = "ea5b3895fb9488fdcd48af5626f9f9d184ffee22"
SRCREV_qtcharts = "9c424c024398146fbea6e91b40cf789746012d28"
SRCREV_qtcoap = "bc0606bc8a11e6321a156acaf18d589a8cc67786"
SRCREV_qtconnectivity = "f9f1b820511d7ce65f58d547fdf24dc5b37e01dc"
SRCREV_qtdatavis3d = "2a034049bcf4ccd45224fcff7841a1d91e63de1a"
SRCREV_qtdeclarative = "c083455490126237b584f44aeb3d5bfe2d51a654"
SRCREV_qtdeviceutilities = "e20dc5cd15eae31c4cec027b160572e2a888f6c8"
SRCREV_qtgrpc = "9e7e178bee994789a772e26a27a1b844fb7acb32"
SRCREV_qthttpserver = "f02b44a2b42a9750ec1fcaed7bb64a79ce3ea005"
SRCREV_qtimageformats = "332c8d53b769fb2fb17ef9e1d220f4c8d8bb267a"
SRCREV_qtinterfaceframework = "4cd6780cc3c37d1059fbb6fe322ebc117fcd4410"
SRCREV_qtlanguageserver = "537cc91d396041622b3739c6e44e960d29dbab53"
SRCREV_qtlocation = "3b44d25b1aa977a41b2a8168f4824ce7734f469a"
SRCREV_qtlottie = "9148fd84ceeb3523f5a4801ddcf34460779b3993"
SRCREV_qtmqtt = "12d0ce70f85946610a870d5e2df18573812b07c1"
SRCREV_qtmultimedia = "6ccd2f95c9ed71170f2b4ed575c5818c1bd89f95"
SRCREV_qtnetworkauth = "62f99e16521038c51505ab79e5ecc548d079d5e1"
SRCREV_qtopcua = "6fa856f2d2c5a9342eca349ffb373dfa73f277f7"
SRCREV_qtpositioning = "87cc94d084d72362c2f93cfbbc55e535aa3350eb"
SRCREV_qtquick3d = "74badb6ce89f8b3ea0536021425eee40ee363905"
SRCREV_qtquick3d-assimp = "fd7cd819e9e130385e17e707da31e60b82e787d0"
SRCREV_qtquick3dphysics = "4b44368c311f18da1e3cd25b6195c8391fe142f1"
SRCREV_qtquickdesigner-components = "5eb7b9257de974ef0b3a4b128c0adf5ed24517f1"
SRCREV_qtquicktimeline = "63f3c0e328b740fe8f3105171be48e108a7d9e90"
SRCREV_qtremoteobjects = "3a5054febb7d835f6c4e832cae1ef7d6faa4bc69"
SRCREV_qtscxml = "b4b2c5607c9266fcb470883a45baa64b37c9b0bd"
SRCREV_qtsensors = "1e78471328f53b44071c1883b55c616d80e8b8bb"
SRCREV_qtserialbus = "951475e6680c55954dacaef171b8afd21f91df5f"
SRCREV_qtserialport = "be32ff76d79af427816136d0c23f88e1b65ce0d9"
SRCREV_qtshadertools = "617b8c54267f66e0050374b6f69f80b54e2e219f"
SRCREV_qtspeech = "50d7ca38d1be4537121b01645fdc041a35c0500a"
SRCREV_qtsvg = "c0be474524400e4fc0dd6ae4b90837e6f554d563"
SRCREV_qttools = "d9fcaa93b7c8baa3bb07d84f8eb0f34e3360548f"
SRCREV_qttools-qlitehtml = "f05f78ef33225823d348ee18f2fa464e95024dd2"
SRCREV_qttools-qlitehtml-litehtml = "43af58e8adad70c4f1a0a9235546a246754c1737"
SRCREV_qttranslations = "a8efa1f6c8a6bca0926724f7ddaee5fe98eb63c4"
SRCREV_qtvirtualkeyboard = "89e1fc1a83be4d84b077a46f022d5bbbec974c7c"
SRCREV_qtwayland = "8475c2d9697eb1d2caf2f9c6eb6ad2a0e09e9515"
SRCREV_qtwebchannel = "b6479a3ba44b2a51f71cbabdc37d0c3ead1fa793"
SRCREV_qtwebengine = "66553914c231c185ec297486ecb0443984cc705e"
SRCREV_qtwebengine-chromium = "eb31082fcba2380e2cc5789aa707328050531e8d"
SRCREV_qtwebsockets = "259d2dd7734717135504f308125db8c225551b64"
SRCREV_qtwebview = "dd65d734c7a0f7d6c4c2be12cb01c6300a7ccd98"
