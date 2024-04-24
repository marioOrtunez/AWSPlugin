# AWSPlugin
Plugin de AWS que utilizo, tiene los implementado estos modulos del *sdk de AWS*:
- **Core**: El módulo Core es fundamental para el SDK de AWS. Proporciona *funcionalidades básicas* para interactuar con los servicios de AWS, como la autenticación, la configuración de las credenciales y la gestión de solicitudes HTTP. Esencialmente, es el corazón del SDK y es *necesario para utilizar cualquier otro servicio* de AWS.
- **Kinesis**: Amazon Kinesis es un servicio que te permite *recopilar, procesar y analizar datos en tiempo real*, como streams de datos de logs, eventos, métricas, etc. El módulo Kinesis del SDK de AWS proporciona herramientas para interactuar con los diferentes *componentes de Kinesis*, como *Kinesis Data Streams*, *Kinesis Data Firehose* y *Kinesis Data Analytics*, permitiéndote leer y escribir datos en streams de manera programática.
- **Cognito-identity**: Amazon Cognito es un servicio de AWS que te permite *agregar autenticación, autorización y gestión de usuarios* a tus aplicaciones de forma sencilla y segura. El módulo Cognito-identity del SDK de AWS te permite interactuar con el servicio de identidad de Cognito, que incluye funciones como la gestión de identidades de usuarios, la autenticación federada con proveedores de identidad como Facebook o Google, y la sincronización de datos entre dispositivos.
- **Lex**: Amazon Lex es un servicio de AWS que te permite *construir interfaces de conversación* de forma fácil y rápida, utilizando tecnología de *reconocimiento de voz y procesamiento de lenguaje natural (NLP)*. El módulo Lex del SDK de AWS te permite crear y gestionar bots de conversación que pueden interactuar con los usuarios a través de texto o voz, permitiéndote integrar capacidades de *chatbot* en tus aplicaciones.
- **LexV2-Runtime**: El módulo "lexv2-runtime" del SDK de AWS proporciona *herramientas para interactuar con los bots de conversación* creados en la plataforma de Amazon Lex versión 2 (Lex V2). Permite a los desarrolladores enviar mensajes de texto o voz a los bots de Lex V2, recibir respuestas y gestionar sesiones de conversación. Es *esencial para integrar capacidades de procesamiento de lenguaje natural y conversación* en aplicaciones, permitiendo crear experiencias conversacionales intuitivas y personalizadas para los usuarios.

### Pd: Parte del tutorial donde se añade la carpeta *AWSSDK* como modulo de depndencia
Navigate to your Project’s Build.cs file (should be in a location like: [ProjectName]\Source\[ProjectName]\[ProjectName].Build.cs). Add the AWS SDK Module you created earlier as a dependency (You will see below I added “AWSSDK” in the list) and add the bEnableUndefinedIdentifierWarnings = false; line.

ExampleProject.Build.cs

PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "AWSSDK" });
//...
bEnableUndefinedIdentifierWarnings = false;

## Links
- [Tutorial de instalación de módulos para Unreal Engine de AWS.](https://aws.amazon.com/es/blogs/gametech/how-to-integrate-the-aws-c-sdk-with-unreal-engine/)
- [Vcpkg (Herramineta de administración de paquetes, para descargar módulos).](https://github.com/microsoft/vcpkg)
- [Librería Json de **nlohmann** (no es de AWS).](https://github.com/nlohmann/json?tab=readme-ov-file)
