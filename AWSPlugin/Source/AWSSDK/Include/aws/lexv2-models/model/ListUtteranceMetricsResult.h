﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceResult.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class ListUtteranceMetricsResult
  {
  public:
    AWS_LEXMODELSV2_API ListUtteranceMetricsResult();
    AWS_LEXMODELSV2_API ListUtteranceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListUtteranceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the bot for which you retrieved utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline const Aws::Vector<AnalyticsUtteranceResult>& GetResults() const{ return m_results; }

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline void SetResults(const Aws::Vector<AnalyticsUtteranceResult>& value) { m_results = value; }

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline void SetResults(Aws::Vector<AnalyticsUtteranceResult>&& value) { m_results = std::move(value); }

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& WithResults(const Aws::Vector<AnalyticsUtteranceResult>& value) { SetResults(value); return *this;}

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& WithResults(Aws::Vector<AnalyticsUtteranceResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& AddResults(const AnalyticsUtteranceResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The results for the utterance metrics.</p>
     */
    inline ListUtteranceMetricsResult& AddResults(AnalyticsUtteranceResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline ListUtteranceMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline ListUtteranceMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the ListUtteranceMetrics operation contains more results
     * than specified in the maxResults parameter, a token is returned in the
     * response.</p> <p>Use the returned token in the nextToken parameter of a
     * ListUtteranceMetrics request to return the next page of results. For a complete
     * set of results, call the ListUtteranceMetrics operation until the nextToken
     * returned in the response is null.</p>
     */
    inline ListUtteranceMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListUtteranceMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListUtteranceMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListUtteranceMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::Vector<AnalyticsUtteranceResult> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
