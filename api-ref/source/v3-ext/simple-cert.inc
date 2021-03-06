.. -*- rst -*-

====================
 OS-SIMPLE-CERT API
====================

Allows the retrieval of information for Certificate Authorities and certificates.
Requires v3.0+ of the Identity API.

Show CA Certificate
===================

.. rest_method:: GET /v3/OS-SIMPLE-CERT/ca

Show the availbable CA certificate.

Normal response codes: 200

Error response codes: 401, 500

Response Example
----------------

.. literalinclude:: ./samples/OS-SIMPLE-CERT/show-ca-certificate-response.txt
   :language: text

Show Signing Certificate
========================

.. rest_method:: GET /v3/OS-SIMPLE-CERT/certificates

Show the available signing certificate.

Normal response codes: 200

Error response codes: 401, 500

Response Example
----------------

.. literalinclude:: ./samples/OS-SIMPLE-CERT/show-signing-certificate-response.txt
   :language: text
