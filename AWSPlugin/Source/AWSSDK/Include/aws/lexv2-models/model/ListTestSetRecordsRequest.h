﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListTestSetRecordsRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListTestSetRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestSetRecords"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline ListTestSetRecordsRequest& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline ListTestSetRecordsRequest& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the test set to list its test set records.</p>
     */
    inline ListTestSetRecordsRequest& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The maximum number of test set records to return in each page. If there are
     * fewer records than the max page size, only the actual number of records are
     * returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of test set records to return in each page. If there are
     * fewer records than the max page size, only the actual number of records are
     * returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of test set records to return in each page. If there are
     * fewer records than the max page size, only the actual number of records are
     * returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of test set records to return in each page. If there are
     * fewer records than the max page size, only the actual number of records are
     * returned.</p>
     */
    inline ListTestSetRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline ListTestSetRecordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline ListTestSetRecordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the ListTestSetRecords operation contains more results
     * than specified in the maxResults parameter, a token is returned in the response.
     * Use that token in the nextToken parameter to return the next page of
     * results.</p>
     */
    inline ListTestSetRecordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
